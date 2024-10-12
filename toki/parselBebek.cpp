#include<bits/stdc++.h>
typedef long long ll;
using namespace std; 

int n,m;
ll a[300005];

ll f(ll x)
{
    ll ret = 0; 
    for(int i=0;i<n;i++)
    {
        ret += x/a[i];
    }
    return ret;
} 

ll binser(ll b)
{
    ll l = 1;
    ll r = (1LL<<60); 
    ll ret = 1; 
    while(l<=r)
    {
        ll mid = (l+r)/2; 
        if(f(mid)>=b)
        {
            r = mid-1; 
            ret = mid;
        }
        else 
        {
            l = mid+1;
        }
    } 
    return ret;
}

int main()
{
    cin >> n >> m; 
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    } 
    cout << binser(m+1)-binser(m) << endl;

}