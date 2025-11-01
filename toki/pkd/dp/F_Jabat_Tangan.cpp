#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAX = 57;
ll n;
ll catalan[MAX];
void init() {
    catalan[0] = catalan[1] = 1;
    for (ll i=2; i<=n; i++) {
        catalan[i] = 0;
        for (ll j=0; j < i; j++) {
            catalan[i] += (catalan[j] * catalan[i-j-1]);
        }
    }
}

void solution()
{
   cin >> n; 
   init();
   if(n%2==1) cout << 0 << "\n"; 
   else 
   {
    ll x = n/2; 
    cout << catalan[x] << "\n";
   }
}

signed main()
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