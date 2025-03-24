#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 998244353;
const int MAX_VAL = 200000; // Asumsi nilai maksimum dalam array

ll mods(ll a, ll b, int mod) {
    return (a % mod) * (b % mod) % mod;
}

void solution() {
    int n;
    cin >> n;
    vector<int> freq(MAX_VAL + 1, 0);
    
    // Baca input dan catat frekuensi angka
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }
    
    ll ans = 1;
    
    // Iterasi dari 1 hingga MAX_VAL untuk menghitung gcd yang muncul
    for (int g = 1; g <= MAX_VAL; g++) {
        ll count = 0;
        // Hitung berapa banyak kelipatan g yang ada dalam array
        for (int multiple = g; multiple <= MAX_VAL; multiple += g) {
            count += freq[multiple];
        }
        
        // Jika ada lebih dari 1 elemen dengan kelipatan g, kita proses
        if (count > 1) {
            ll contrib = g;
            ll pair_count = (count * (count - 1)) / 2; // Jumlah pasangan unik
            for (ll i = 0; i < pair_count; i++) {
                ans = mods(ans, contrib, mod);
            }
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t = 1;
    while (t--) {
        solution();
    }
    return 0;
}