#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
    int n, k;
    cin >> n >> k;
    vector<ll> v(n); 
    vector<ll> t;
    for(int i = 0; i < n; i++) cin >> v[i]; 
    ll maks = 0; 
    
    sort(v.begin(), v.end()); 
    
    int k1 = k / 2; 
    for(int i = 0; i < k1; i++)
    {
        t.push_back(v[i]);
    } 
    
    int k2 = k - k1; 
    for(int i = n - k2; i < n; i++)
    {
        t.push_back(v[i]);
    } 
    
    for(int i = 0; i < k; i++)
    {
        ll coef = 2LL * (i + 1) - k - 1; 
        maks += coef * t[i]; 
    }
    
    cout << maks << "\n";
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