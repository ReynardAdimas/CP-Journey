#include <bits/stdc++.h>
#define ll long long
using namespace std;

const  ll mod = 1000000007;
const int MAX_N = 1000; 
vector<ll> fact(MAX_N+1), inv(MAX_N+1);

ll modExp(ll base, ll exp, ll m)
{
    ll hasil = 1; 
    while(exp > 0)
    {
        if(exp%2 == 1)
        {
            hasil = (hasil*base)%m;
        }
        base = (base*base)%m; 
        exp/=2;
    }
    return hasil;
}

void pre()
{
    fact[0] = 1; 
    for(int i=1;i<=MAX_N;i++)
    {
        fact[i] = (fact[i-1] * i) % mod;
    }
    inv[MAX_N] = modExp(fact[MAX_N], mod - 2, mod); 
    for(int i=MAX_N-1; i>=0;i--)
    {
        inv[i] = (inv[i+1]*(i+1)) % mod;
    }
}

ll combination(int n, int r) {
    if(r > n) return 0; 
    return (fact[n] * inv[r] % mod * inv[n-r] % mod) % mod;
}

void solution() {
    int n, a, b;
    cin >> n >> a >> b;
    ll sum = 0; 
    for(int i=a;i<=b;i++)
    {
        sum = (sum%mod + combination(n,i)%mod)%mod;
    }
    cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    pre();
    int t;
    t = 1;
    //cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
