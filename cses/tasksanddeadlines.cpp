#include<bits/stdc++.h>
#define ll long long
using namespace std; 

bool sortByFirst(const pair<ll, ll>& a, const pair<ll,ll>& b)
{
    if(a.first != b.first)
    {
        return (a.first < b.first);
    }
    else 
    {
        return (a.second > b.second);
    }
}

void solution()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    for(int i=0;i<n;i++)
    {
        ll a,d;
        cin >> a >> d; 
        p[i] = {a,d};
    } 
    sort(p.begin(), p.end(), sortByFirst); 
    ll ans = p[0].second - p[0].first; 
    int i = 1; 
    ll duration = p[0].first;
    while(i<n)
    {
        // cout << ans << endl;
        duration += p[i].first;
        ans+=p[i].second - (duration);
        i++;
    }
    cout << ans << endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout << p[i].first << " " << p[i].second << endl;
    // }
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