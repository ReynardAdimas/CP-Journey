#include <bits/stdc++.h>
using namespace std;

const int MOD = 7109;
const int MAXN = 100005;

long long fact[MAXN], inv_fact[MAXN];

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base = (base % mod + mod) % mod; 
    while (exp > 0) {
        if (exp & 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

void precomputefac(int n) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
        fact[i] = (fact[i - 1] * i) % MOD;

    inv_fact[n] = power(fact[n], MOD - 2, MOD);
    for (int i = n - 1; i >= 0; --i)
        inv_fact[i] = (inv_fact[i + 1] * (i + 1LL)) % MOD;
}

long long comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return (fact[n] * inv_fact[k] % MOD * inv_fact[n - k]) % MOD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    precomputefac(n);

    long long res = 0;
    for (int i = 0; i <= n; ++i) {
        long long mark = (i % 2 == 0) ? 1 : MOD - 1;
        long long binom = comb(n, i);

        long long base = (power(2, n - i, MOD) - 1 + MOD) % MOD;
        long long valid;
        if (base == 0) {
            valid = (m == 0) ? 1 : 0;
        } else {
            valid = power(base, m, MOD);
        }

        long long term = (mark * binom) % MOD;
        term = (term * valid) % MOD;
        res = (res + term) % MOD;
    }

    cout << res << endl;
    return 0;
}