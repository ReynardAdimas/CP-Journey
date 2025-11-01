// Shortest Routes I - CSES
#include<bits/stdc++.h>
using namespace std;
const int maxV = 2e5; 
const long long  INF = 1e18;

int V, E; 
vector<pair<int, int>> adj[maxV+5]; 
long long dist[maxV+5]; 
int prev[maxV+5]; 
priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> PQ;

void solution()
{
   cin >> V >> E; 
   for(int i=0;i<E;i++)
   {
    int u,v,w; 
    cin >> u >> v >> w; 
    u--;
    v--; 
    adj[u].push_back({v,w});
    // adj[v].push_back({u,w});
   } 
   int start = 0; 
   for(int i=0;i<V;i++) dist[i] = INF; 
   dist[start] = 0; 
   PQ.push({0, start}); 
   while(!PQ.empty())
   {
    auto [curDist, curNode] = PQ.top(); 
    PQ.pop(); 
    if(curDist > dist[curNode]) continue; 
    for(auto [nextNode, weight] : adj[curNode])
    {
        if(dist[nextNode] <= dist[curNode] + weight) continue; 
        dist[nextNode] = dist[curNode] + weight; 
        PQ.push({dist[nextNode], nextNode});
    }
   } 
   for(int i=0;i<V;i++)
   {
    cout << dist[i] << " ";
   }
   cout << "\n";
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