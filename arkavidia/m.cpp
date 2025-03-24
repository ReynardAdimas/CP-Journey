#include<bits/stdc++.h>
#define ll long long
using namespace std; 
const int mod = 998244353;

int euc(int a, int b)
{
    if(a==0) return b; 
    if(b==0) return a; 
    if(a==b) return a; 
    if(a>b) return euc(a-b,b); 
    if(a<b) return euc(a,b-a);
}

ll mods(ll a, ll b, int mod)
{
    return (a%mod) * (b%mod) %mod;
}

void solution()
{
   int n; 
   cin >> n; 
    vector<int> v(n);
    ll ans = 1; 
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll fpb = euc(v[i],v[j]);
            ans = mods(ans, fpb, mod);
        }
    }
    cout << ans << endl;
}   


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}