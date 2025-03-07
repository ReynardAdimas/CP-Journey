#include<bits/stdc++.h>
#define ll long long
using namespace std; 

const int maks = 2e5; 
ll p[maks];

ll solve(ll* p, ll n, ll x)
{
    sort(p, p+n); 
    ll l = 0, r = n-1; 
    ll ans = 0;
    while(r>=l)
    {
        if(p[l] + p[r] <= x)
        {
            ans++; 
            l++; 
            r--;
        }
        else 
        {
            ans++; 
            r--;
        }
    }
    return ans;
}

void solution()
{
   ll n,x; 
   cin >> n >> x;

   for(int i=0;i<n;i++) cin >>p[i]; 
   cout << solve(p, n,x) << endl;
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