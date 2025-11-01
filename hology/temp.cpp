#include <iostream>
#include <string>
#include <vector>

// Fungsi untuk memeriksa apakah sebuah nilai ASCII adalah alfanumerik
// ('0'-'9', 'A'-'Z', 'a'-'z')
bool isAlphanumeric(int val) {
    return (val >= 48 && val <= 57) ||  // '0' to '9'
           (val >= 65 && val <= 90) ||  // 'A' to 'Z'
           (val >= 97 && val <= 122);   // 'a' to 'z'
}

void solve() {
    std::string s;
    std::cin >> s;

    // Gunakan long long untuk frekuensi agar tidak overflow saat perkalian
    std::vector<long long> freq(10, 0);
    for (char c : s) {
        freq[c - '0']++;
    }

    long long total_pairs = 0;
    const long long MOD = 1e9 + 7;

    // Iterasi melalui semua kemungkinan digit pertama (d1)
    for (int d1 = 0; d1 <= 9; ++d1) {
        if (freq[d1] == 0) continue; // Lewati jika digit ini tidak ada di string

        // Iterasi melalui semua kemungkinan digit kedua (d2)
        for (int d2 = 0; d2 <= 9; ++d2) {
            if (freq[d2] == 0) continue; // Lewati jika digit ini tidak ada di string

            int num = d1 * 10 + d2;
            if (isAlphanumeric(num)) {
                long long ways;
                if (d1 == d2) {
                    // Jika digitnya sama, kita perlu memilih 2 posisi berbeda
                    // dari total freq[d1] posisi yang tersedia.
                    // Caranya adalah freq[d1] * (freq[d1] - 1).
                    ways = freq[d1] * (freq[d1] - 1);
                } else {
                    // Jika digitnya berbeda, kita memilih satu posisi untuk d1
                    // dan satu posisi untuk d2.
                    // Caranya adalah freq[d1] * freq[d2].
                    ways = freq[d1] * freq[d2];
                }
                
                // Tambahkan ke total, dan lakukan modulo di setiap langkah
                total_pairs = (total_pairs + ways) % MOD;
            }
        }
    }

    std::cout << total_pairs << "\n";
}

int main() {
    // Mempercepat proses I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}