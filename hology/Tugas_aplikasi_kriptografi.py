import streamlit as st
import base64
from itertools import cycle

# PAdding 
def pad(data, block_size):
    """Menambahkan padding PKCS#7 ke data."""
    padding_len = block_size - (len(data) % block_size)
    padding = bytes([padding_len] * padding_len)
    return data + padding

def unpad(data):
    """Menghapus padding PKCS#7 dari data."""
    padding_len = data[-1]
    if padding_len > len(data) or padding_len == 0:
        raise ValueError("Padding salah atau data korup.")
    # Verifikasi padding
    if data[-padding_len:] != bytes([padding_len] * padding_len):
        raise ValueError("Padding tidak valid (PKCS#7).")
    return data[:-padding_len]

# Caesar
def caesar_encrypt(text, shift):
    out = []
    for ch in text:
        if 'a' <= ch <= 'z':
            out.append(chr((ord(ch)-97 + shift) % 26 + 97))
        elif 'A' <= ch <= 'Z':
            out.append(chr((ord(ch)-65 + shift) % 26 + 65))
        else:
            out.append(ch)
    return ''.join(out)

def caesar_decrypt(text, shift):
    return caesar_encrypt(text, -shift)

# Vignere
def vigenere_encrypt(text, key):
    out = []
    key = key or "A"
    key_index = 0
    for ch in text:
        k = key[key_index % len(key)]
        if 'a' <= ch <= 'z':
            shift = ord(k.lower()) - 97
            out.append(chr((ord(ch)-97 + shift) % 26 + 97))
            key_index += 1
        elif 'A' <= ch <= 'Z':
            shift = ord(k.upper()) - 65
            out.append(chr((ord(ch)-65 + shift) % 26 + 65))
            key_index += 1
        else:
            out.append(ch)
    return ''.join(out)

def vigenere_decrypt(text, key):
    out = []
    key = key or "A"
    key_index = 0
    for ch in text:
        k = key[key_index % len(key)]
        if 'a' <= ch <= 'z':
            shift = ord(k.lower()) - 97
            out.append(chr((ord(ch)-97 - shift) % 26 + 97))
            key_index += 1
        elif 'A' <= ch <= 'Z':
            shift = ord(k.upper()) - 65
            out.append(chr((ord(ch)-65 - shift) % 26 + 65))
            key_index += 1
        else:
            out.append(ch)
    return ''.join(out)

# XOR Stream
def xor_bytes(data: bytes, key: bytes) -> bytes:
    """Fungsi XOR untuk stream cipher."""
    return bytes([d ^ k for d, k in zip(data, cycle(key))])

def xor_block_key(a, b):
    """Fungsi XOR untuk block cipher, mengulang kunci jika lebih pendek."""
    return bytes([x ^ y for x, y in zip(a, cycle(b))])

# Block Cipher
def block_encrypt(data: bytes, key: bytes, block_size: int) -> bytes:
    """Enkripsi data menggunakan mode ECB sederhana dengan XOR."""
    padded_data = pad(data, block_size)
    blocks = [padded_data[i:i+block_size] for i in range(0, len(padded_data), block_size)]
    encrypted_blocks = [xor_block_key(block, key) for block in blocks]
    return b"".join(encrypted_blocks)

def block_decrypt(ciphertext: bytes, key: bytes, block_size: int) -> bytes:
    """Dekripsi data menggunakan mode ECB sederhana dengan XOR."""
    ct_blocks = [ciphertext[i:i+block_size] for i in range(0, len(ciphertext), block_size)]
    decrypted_blocks = [xor_block_key(block, key) for block in ct_blocks]
    padded_plaintext = b"".join(decrypted_blocks)
    return unpad(padded_plaintext)

# Super Enkripsi
def super_encrypt(plaintext: str, caesar_k: int, vkey: str, xor_key: str, block_key: str, block_size: int):
    # 1. Caesar
    s1 = caesar_encrypt(plaintext, caesar_k)
    # 2. Vigenere
    s2 = vigenere_encrypt(s1, vkey)
    # 3. XOR Stream
    b3 = xor_bytes(s2.encode('utf-8'), xor_key.encode('utf-8'))
    # 4. Block Cipher
    final_ct = block_encrypt(b3, block_key.encode('utf-8'), block_size)
    return base64.b64encode(final_ct).decode('utf-8')

def super_decrypt(cipher_b64: str, caesar_k: int, vkey: str, xor_key: str, block_key: str, block_size: int):
    # 1. Decode Base64
    blob = base64.b64decode(cipher_b64.encode('utf-8'))
    # 2. Block Decrypt
    b3 = block_decrypt(blob, block_key.encode('utf-8'), block_size)
    # 3. XOR Stream reverse
    s2 = xor_bytes(b3, xor_key.encode('utf-8')).decode('utf-8', errors='ignore')
    # 4. Vigenere decrypt
    s1 = vigenere_decrypt(s2, vkey)
    # 5. Caesar decrypt
    pt = caesar_decrypt(s1, caesar_k)
    return pt

# UI
st.title("Tugas Kriptografi — Aplikasi Enkripsi/Dekripsi ")

menu = st.sidebar.selectbox("Pilih Menu", [
    "1 - Caesar (Metode Klasik)",
    "2 - Vigenère (Metode Klasik)",
    "3 - XOR stream (Metode Modern)",
    "4 - Block Cipher (Metode Modern)",
    "5 - Super Encryption (Gabungan)"
])

if menu.startswith("1"):
    st.header("Menu 1 — Caesar Cipher")
    text = st.text_area("Plaintext / Ciphertext", value="Halo, ini contoh.")
    k = st.number_input("Shift (k) Masukkan Angka", min_value=0, max_value=25, value=3)
    if st.button("Enkripsi"):
        st.success("Hasil Enkripsi")
        st.code(caesar_encrypt(text, k))
    if st.button("Dekripsi"):
        st.success("Hasil Dekripsi")
        st.code(caesar_decrypt(text, k))

elif menu.startswith("2"):
    st.header("Menu 2 — Vigenère Cipher")
    text = st.text_area("Plaintext / Ciphertext", value="Halo, ini contoh.")
    key = st.text_input("Key (kata),String Value", value="KEY")
    if st.button("Enkripsi"):
        st.success("Hasil Enkripsi")
        st.code(vigenere_encrypt(text, key))
    if st.button("Dekripsi"):
        st.success("Hasil Dekripsi")
        st.code(vigenere_decrypt(text, key))

elif menu.startswith("3"):
    st.header("Menu 3 — XOR Stream (demo)")
    text = st.text_area("Plaintext / Ciphertext", value="Halo, ini contoh.")
    key = st.text_input("Key (String Value)", value="mysecret")
    if st.button("Enkripsi"):
        if not text or not key:
            st.warning("text atau Kunci tidak boleh kosong.")
        else : 
         b = xor_bytes(text.encode('utf-8'), key.encode('utf-8'))
         st.success("Hasil Enkripsi")
         st.code(base64.b64encode(b).decode())
      
    if st.button("Dekripsi"):
            try:
                b = base64.b64decode(text.encode())
                pt = xor_bytes(b, key.encode('utf-8')).decode('utf-8', errors='ignore')
                st.success("Hasil Dekripsi")
                st.code(pt)
            except Exception as e:
                st.error("Gagal decode base64 atau XOR: " + str(e))

elif menu.startswith("4"):
    st.header("Menu 4 — Block Cipher Sederhana (XOR)")
    text = st.text_area("Plaintext / Ciphertext (Base64)", value="Ini adalah pesan rahasia untuk block cipher")
    key = st.text_input("Kunci (Key)", value="kunci123")
    block_size = st.number_input("Ukuran Blok (bytes)", min_value=4, max_value=16, value=8)

    if st.button("Enkripsi"):
            if not text or not key:
                st.warning("Pesan dan Kunci tidak boleh kosong.")
            else:
                try:
                    ciphertext = block_encrypt(text.encode('utf-8'), key.encode('utf-8'), block_size)
                    st.success("Hasil Enkripsi")
                    st.code(base64.b64encode(ciphertext).decode('utf-8'))
                except Exception as e:
                    st.error(f"Terjadi error saat enkripsi: {e}")


    if st.button("Dekripsi"):
            if not text or not key:
                st.warning("Ciphertext dan Kunci tidak boleh kosong.")
            else:
                try:
                    ciphertext_bytes = base64.b64decode(text.encode('utf-8'))
                    decrypted_data = block_decrypt(ciphertext_bytes, key.encode('utf-8'), block_size)
                    st.success("Hasil Dekripsi")
                    st.code(decrypted_data.decode('utf-8'))
                except Exception as e:
                    st.error(f"Gagal dekripsi. Error: {e}")

elif menu.startswith("5"):
    st.header("Menu 5 — Super Encryption (gabungan)")
    st.write("Sebuah pipeline enkripsi: Caesar → Vigenère → XOR Stream → Block Cipher")
    plaintext = st.text_area("Plaintext / Ciphertext (Base64)", value="Pesan super rahasia!")
    
    st.subheader("Konfigurasi Layer")
    c1, c2 = st.columns(2)
    with c1:
        caesar_k = st.number_input("1. Caesar shift (k)", min_value=0, max_value=25, value=3)
        vkey = st.text_input("2. Vigenere key", value="KUNCI")
    with c2:
        xor_key = st.text_input("3. XOR stream key", value="rahasiaXOR")
        block_key = st.text_input("4. Block cipher key", value="kunciBlok")
    block_size_super = st.slider("Ukuran Blok untuk Block Cipher (bytes)", min_value=4, max_value=16, value=8)

    if st.button("Super Enkripsi"):
        if not plaintext.strip():
            st.warning("Plaintext tidak boleh kosong.")
        elif not vkey.strip() or not xor_key.strip() or not block_key.strip():
            st.warning("Semua kunci (Vigenere, XOR, Block) harus diisi sebelum melakukan Super Enkripsi.")
        else:
            ct = super_encrypt(plaintext, caesar_k, vkey, xor_key, block_key, block_size_super)
            st.success("Hasil Super Enkripsi")
            st.code(ct)

        
    if st.button("Super Dekripsi"):
        try:
            pt = super_decrypt(plaintext, caesar_k, vkey, xor_key, block_key, block_size_super)
            st.success("Hasil Super Dekripsi")
            st.code(pt)
        except Exception as e:
            st.error(f"Gagal dekripsi gabungan: {e}")

