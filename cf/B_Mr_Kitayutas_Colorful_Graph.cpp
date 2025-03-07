// link : https://codeforces.com/problemset/problem/505/B
#include<bits/stdc++.h>
using namespace std; 
const int N = 100+10, M = 100+10; 
vector<int> adj[N][M];
bool vis[N];

void dfs(int v, int c)
{
    vis[v] = true; 
    for(int u:adj[v][c])
    {
        if(!vis[u])
        {
            dfs(u,c);
        }
    }
}

void solution()
{
   int n,m; 
   cin >> n >> m;
   for(int i=0;i<m;i++)
   {
     int u,v,c; 
     cin >> u >> v >> c; 
     adj[u][c].push_back(v); 
     adj[v][c].push_back(u);
   } 
   int q; 
   cin >> q; 
   
   for(int j=1;j<=q;j++)
   {
     int u,v; 
     cin >> u >> v; 
     int counter = 0;
        for(int c=1;c<=m;c++)
        {
            for(int i=1;i<=n;i++)
            {
                vis[i] = false;
            }
            dfs(u,c); 
            if(vis[v]==true) counter++;
        }
        cout << counter << endl;
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