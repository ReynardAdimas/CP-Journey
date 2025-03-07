#include<bits/stdc++.h>
using namespace std; 
const int N = 100000+5; 
vector<int> adj[N]; 
bool vis[N]; 
int counter = 0;

void traverse(int v)
{
    vis[v] = true; 
    counter++;
    for(int u:adj[v])
    {
        if(!vis[u])
        {
            traverse(u);
        }
    }
}

void solution()
{
    int n,m; 
    cin >> n >> m; 
    for(int i=0;i<N;i++) vis[i] = false;
    for(int i=0;i<m;i++)
    {
        int u,v; 
        cin >> u >> v; 
        adj[u].push_back(v); 
        adj[v].push_back(u);
    } 
     
    traverse(1);
    int ans = 0; 
    for(int i=0;i<n;i++)
    {
        if(!vis[i]) ans++; // count cycle graph
    }
    cout << ans << endl;
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