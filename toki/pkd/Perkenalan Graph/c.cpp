#include <bits/stdc++.h>
using namespace std;

const int MOD = 7109;
const int MAXN = 100005;

// Precompute factorial and inverse factorial
int fact[MAXN], inv_fact[MAXN];

int power(int base, int exp, int mod) {
    int res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            res = (1LL * res * base) % mod;
        base = (1LL * base * base) % mod;
        exp /= 2;
    }
    return res;
}

void precompute_factorials(int n) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
        fact[i] = (1LL * fact[i - 1] * i) % MOD;

    inv_fact[n] = power(fact[n], MOD - 2, MOD);
    for (int i = n - 1; i >= 0; --i)
        inv_fact[i] = (1LL * inv_fact[i + 1] * (i + 1)) % MOD;
}

int comb(int n, int k) {
    if (k < 0 || k > n) return 0;
    return (1LL * fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    precompute_factorials(n);

    int res = 0;
    for (int i = 0; i <= n; ++i) {
        int sign = (i % 2 == 0) ? 1 : MOD - 1;
        int binom = comb(n, i);

        int base = (power(2, n - i, MOD) - 1 + MOD) % MOD;
        if (base == 0 && m > 0) continue; // skip invalid 0^m case

        int valid = power(base, m, MOD);
        res = (res + 1LL * sign * binom % MOD * valid % MOD) % MOD;
    }

    cout << res << '\n';
    return 0;
}
