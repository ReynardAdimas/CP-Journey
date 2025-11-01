#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   ll n; 
   cin >> n; 
   vector<ll> v(n+1); 
   for(ll i=1;i<=n;i++) cin >> v[i]; 
   vector<ll> prefix(n+1); 
   for(ll i=1;i<=n;i++)
   {
    prefix[i] = prefix[i-1]+v[i]; 
   }
   sort(v.begin(), v.end());
   vector<ll> prefix2(n+1); 
    for(ll i=1;i<=n;i++)
    {
        prefix2[i] = prefix2[i-1] + v[i]; 
    } 
   ll m; 
   cin >> m; 
   for(ll i=0;i<m;i++)
   {
    ll q,l,r;
    cin >> q >> l >> r; 
    if(q==1)
    {
        cout << prefix[r] - prefix[l-1] << "\n";
    }
    else 
    {
        cout << prefix2[r] - prefix2[l-1] << "\n";
    }
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}