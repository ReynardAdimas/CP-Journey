#include<bits/stdc++.h>
using namespace std;

long long mod_exp(long long a, long long b, long long mod) {
    long long res = 1;
    a %= mod;
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void solution() {
    long long a, b;
    cin >> a >> b;
    double log_val = log10(a) * b;
    if (log_val <= 5.9999999) { 
        long long hasil = 1;
        for (int i=0; i<b; ++i) hasil *= a;
        cout << hasil << '\n';
    } else {
        long long hasil = mod_exp(a, b, 1000000);
        printf("%06lld\n", hasil);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
