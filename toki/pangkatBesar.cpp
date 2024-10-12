#include<bits/stdc++.h>
typedef long long ll;
using namespace std; 

ll f(ll a, ll b)
{
    if(b==0)
    {
        return 1;
    }
    ll res = f(a,b/2); 
    if(b%2)
    {
        return res*res*a;
    }
    else 
    {
        return res*res;
    }
}

int main()
{
    ll a,b; 
    cin >> a >> b;
    ll ans = f(a,b);
    if(ans > 999999)
    {
        string format = to_string(ans); 
        cout << format.substr(format.length()-6) << endl;
    }
    else 
    {
        cout << ans << endl;
    }
}