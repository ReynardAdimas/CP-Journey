#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAX_N = 200000;

// Faktorial dan invers faktorial untuk kombinasi
long long fact[MAX_N + 1], inv_fact[MAX_N + 1];

// Fungsi untuk modular exponentiation (fast exponentiation)
long long power(long long a, long long b, long long mod) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// Precompute faktorial dan invers faktorial
void preprocess() {
    fact[0] = inv_fact[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inv_fact[MAX_N] = power(fact[MAX_N], MOD - 2, MOD);
    for (int i = MAX_N - 1; i >= 1; i--) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
}

// Fungsi untuk menghitung kombinasi C(n, r) mod MOD
long long comb(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

// Fungsi utama untuk menyelesaikan masalah
void solve() {
    string s;
    cin >> s;
    int n = s.size();

    int changes1 = 0, changes2 = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (s[i] != '0') changes1++;
            if (s[i] != '1') changes2++;
        } else {
            if (s[i] != '1') changes1++;
            if (s[i] != '0') changes2++;
        }
    }

    int min_ops = max(changes1, changes2);

    // Hitung jumlah cara untuk memilih karakter yang dihapus
    int count0 = count(s.begin(), s.end(), '0');
    int count1 = n - count0;
    long long ways = comb(count0 + count1, min_ops);

    cout << min_ops << " " << ways % MOD << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    preprocess(); // Precompute faktorial dan invers faktorial

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
