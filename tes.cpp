#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mod = 1000000007;
const int MAX_N = 1000;

vector<ll> fact(MAX_N + 1), inv_fact(MAX_N + 1);

// Modular Exponentiation
ll mod_exp(ll base, ll exp, ll m) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        exp /= 2;
    }
    return result;
}

// Precompute factorial and inverse factorial
void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= MAX_N; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
    inv_fact[MAX_N] = mod_exp(fact[MAX_N], mod - 2, mod);
    for (int i = MAX_N - 1; i >= 0; i--) {
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % mod;
    }
}

// Calculate C(n, r)
ll combination(int n, int r) {
    if (r > n || r < 0) return 0;
    return (fact[n] * inv_fact[r] % mod * inv_fact[n - r] % mod) % mod;
}

void solution() {
    int n, a, b;
    cin >> n >> a >> b;
    ll sum = 0;
    for (int i = a; i <= b; i++) {
        sum = (sum + combination(n, i)) % mod;
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    precompute(); // Precompute factorials and inverses

    int t;
    t = 1;
    // cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
