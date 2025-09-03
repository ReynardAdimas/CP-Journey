#include<bits/stdc++.h>
using namespace std; 

const int maxn = 100005; 
vector<int> adj[maxn];
bool visited[maxn];

void dfs(int s)
{
    if(visited[s]) return; 
    visited[s] = true;
    for(auto u:adj[s])
    {
        dfs(u);
    }
}

void solution()
{
   int n,m; 
   cin >> n >> m;
   //vector<int> adj[n];
   for(int i=0;i<m;i++)
   {
    int u,v; 
    cin >> u >> v; 
    adj[u].push_back(v);
    adj[v].push_back(u);
   } 
   // nyari banyak component dalam graf
   int component = 0; 
   for(int i=1;i<=n;i++)
   {
    if(!visited[i])
    {
        dfs(i); // menulusuri 1 komponen yang terhubung dengan node i
        component++;
    }
   }
   cout << component << endl;

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