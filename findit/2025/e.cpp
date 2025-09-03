#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define pl pair<ll, int>

void solution()
{
   int n; 
   cin >> n;
   vector<ll> v(n+1);
   for(int i=1;i<=n;i++)
   {
    cin >> v[i];
   }
   vector<ll> dist(n+1, LLONG_MAX);
   priority_queue<pl, vector<pl>, greater<pl>> pq; 
   dist[1] = 0; 
   pq.push({0,1}); 
   
   while(!pq.empty())
   {
    //auto[cost, u] = pq.top(); 
    pl top = pq.top(); 
    ll cost = top.first; 
    int u = top.second;
    pq.pop(); 
    if(cost > dist[u]) continue;

    for(int j = u+1; j<=n;++j)
    {
        ll baru = dist[u] + v[u] * (j-u);
        if(baru < dist[j])
        {
            dist[j] = baru; 
            pq.push({dist[j],j});
        }
        else 
        {
            break;
        }
    }

    for(int j=u-1;j>=1;--j)
    {
        ll baru = dist[u] + v[u] * (u-j);
        if(baru < dist[j])
        {
            dist[j] = baru; 
            pq.push({dist[j],j});
        }
        else 
        {
            break;
        }
    }
   }
   cout << dist[n] << endl;
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