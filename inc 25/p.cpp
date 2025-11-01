#include <iostream>
#include <vector>
#include <memory>   // Untuk std::unique_ptr
#include <algorithm> // Untuk std::min

// Menggunakan namespace std agar lebih ringkas
using namespace std;

// Tentukan jumlah bit maksimum yang kita perlukan.
// Karena K <= 200000, 2^18 (262144) sudah cukup.
const int MAX_BITS = 18;

// Struktur Node untuk Trie
struct Node {
    // children[0] untuk bit 0, children[1] untuk bit 1
    unique_ptr<Node> children[2];
    // 'count' menyimpan berapa banyak angka yang ada di subtree ini
    int count;

    Node() : count(0) {}
};

// Fungsi untuk memasukkan nilai ke dalam Trie
void insert(Node* root, int val, int bit = MAX_BITS - 1) {
    Node* curr = root;
    curr->count++;
    for (int i = bit; i >= 0; --i) {
        int b = (val >> i) & 1;
        if (!curr->children[b]) {
            curr->children[b] = make_unique<Node>();
        }
        curr = curr->children[b].get();
        curr->count++;
    }
}

// Fungsi untuk mencari MEX(S_x) di dalam Trie
// S_x = {i ^ x | i in S}
// S = {0, 1, ..., K-1}
// Kita mencari 'v' terkecil sehingga (v ^ x) >= K
int query_mex(Node* root, int x, int bit = MAX_BITS - 1) {
    Node* curr = root;
    int mex_val = 0;

    for (int i = bit; i >= 0; --i) {
        if (!curr) {
            // Jika node ini tidak ada, berarti path ini kosong
            // MEX pasti 0 di subtree ini, jadi kita bisa berhenti
            break;
        }

        int x_bit = (x >> i) & 1;

        // Kita ingin 'v' sekecil mungkin, jadi kita coba buat bit ke-i dari 'v' = 0.
        // Bit yang kita cari di trie adalah (v_bit ^ x_bit) = (0 ^ x_bit) = x_bit.
        int path_bit_for_zero = x_bit;

        if (curr->children[path_bit_for_zero] && 
            curr->children[path_bit_for_zero]->count == (1 << i)) {
            
            // Subtree ini 'penuh'. 
            // Semua angka di path ini akan menghasilkan (v ^ x) < K.
            // Kita terpaksa membuat bit ke-i dari 'v' = 1.
            mex_val |= (1 << i);
            
            // Pindah ke path sebelahnya: (1 ^ x_bit)
            curr = curr->children[1 - path_bit_for_zero].get();
        } else {
            // Subtree ini 'tidak penuh'.
            // Artinya, MEX pasti ada di dalam subtree ini.
            // Kita berhasil membuat bit ke-i dari 'v' = 0.
            curr = curr->children[path_bit_for_zero].get();
        }
    }
    return mex_val;
}

int main() {
    // Optimasi I/O C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int Q, K;
    cin >> Q >> K;

    // --- 1. Precomputation ---
    
    // Buat root dari Trie
    auto root = make_unique<Node>();
    
    // Masukkan semua angka dari 0 s/d K-1 ke dalam Trie
    for (int i = 0; i < K; ++i) {
        insert(root.get(), i);
    }

    // Hitung jawaban untuk kasus |S| == K
    int ans_if_full = K + 1; // Inisialisasi dengan nilai besar
    for (int x = 0; x < K; ++x) {
        ans_if_full = min(ans_if_full, query_mex(root.get(), x));
    }

    // --- 2. Memproses Query ---

    // Gunakan vector sebagai frequency array
    vector<int> count(K, 0);
    int distinct_elements = 0;

    for (int q = 0; q < Q; ++q) {
        int type, x;
        cin >> type >> x;

        if (type == 1) { // Insert
            if (count[x] == 0) {
                distinct_elements++;
            }
            count[x]++;
        } else { // Remove
            if (count[x] > 0) {
                count[x]--;
                if (count[x] == 0) {
                    distinct_elements--;
                }
            }
        }

        // --- 3. Cetak Jawaban ---
        if (distinct_elements == K) {
            cout << ans_if_full << "\n";
        } else {
            cout << 0 << "\n";
        }
    }

    return 0;
}