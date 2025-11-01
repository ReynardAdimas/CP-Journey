// Shortest Routes II - CSES
#include<bits/stdc++.h>
using namespace std;

const int maxn = 500; 
const long long INF = 1e15; 

int V,E; 
long long adj[maxn+5][maxn+5]; 


void solution()
{
   int q; 
   cin >> V >> E >> q; 
   for(int u=1;u<=V;u++)
   {
    for(int v=1;v<=V;v++)
    {
        adj[u][v] = INF;
    }
    adj[u][u] = 0;
   } 
   for(int i=0;i<E;i++)
   {
    long long u,v,w; 
    cin >> u >> v >> w; 
    // u--;
    // v--; 
    adj[u][v] = min(adj[u][v], w); 
    adj[v][u] = min(adj[v][u], w);
   } 
   for(int k=1;k<=V;k++)
   {
    for(int u=1;u<=V;u++)
    {
        for(int v=1;v<=V;v++)
        {
            adj[u][v] = min(adj[u][v], adj[u][k]+adj[k][v]);
        }
    }
   } 
//    for(int u=1;u<=V;u++)
//    {
//     for(int v=1;v<=V;v++)
//     {
//         cout << "Jarak dari " << u << " ke " << v << ": " <<adj[u][v] << " ";
//     }
//     cout << endl;
//    }
   for(int i=0;i<q;i++)
   {
    int a,b; 
    cin >> a >> b; 
    if(adj[a][b] >= INF/2) cout << -1 << "\n";
    else cout << adj[a][b] << "\n";
   }
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