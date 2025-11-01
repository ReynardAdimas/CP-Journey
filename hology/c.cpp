#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll maks = 1e18;
void solution()
{
   int n,m, start;
   cin >> n >> m >> start; 

   vector<pair<int, pair<int, int>>> adj[n+1]; 
   for(int i=0;i<m;i++)
   {
    int u,v,w,p; 
    cin >> u >> v >> w >> p; 
    adj[u].push_back({v, {w,p}}); 
    adj[v].push_back({u, {w,p}});
   }
   priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> pq; 
   vector<vector<ll>> dist(n+1, vector<ll>(2, maks)); 
   dist[start][0] = 0; 
   pq.push({0,start,0}); 
   while(!pq.empty())
   {
    auto [curr,u,upar] = pq.top(); 
    pq.pop(); 
    if(curr > dist[u][upar])continue;
    for(auto& edge:adj[u])
    {
        int v = edge.first; 
        int w = edge.second.first;
        int rp = edge.second.second; 

        int t = 0; 
        if(upar != rp) t = 1;

        ll distBaru = curr +  t + w; 
        int vpar = distBaru%2; 
        if(distBaru < dist[v][vpar])
        {
            dist[v][vpar] = distBaru; 
            pq.push({distBaru, v, vpar});
        }
    }
    }
    ll max_min_dist  =-1; 
    int result = -1; 
    for(int i=1;i<=n;i++)
    {
        if(i==start) continue; 
        ll min_dist_i = min(dist[i][0], dist[i][1]);
        if(min_dist_i > max_min_dist)
        {
            max_min_dist = min_dist_i; 
            result = i;
        }
    }
    cout << result << " " << max_min_dist << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}