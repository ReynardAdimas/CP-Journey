#include<bits/stdc++.h>
using namespace std; 

void adjMatriks()
{
    bool adj[100][100]; 
    int n,e; // n adalah jumlah nodes, e adalah jumlah edges
    cin >> n >> e; 
    u--;
    v--;
    for(int i=0;i<e;i++)
    {
        int u,v; // u dan v menyatakan u terhubung ke v, v terhubung ke u (undirectional graph) 
        cin >> u >> v; 
        adj[u][v]=true; 
        adj[v][u]=true; 

    }
}

void adjList()
{
    vector<int> adj[100]; 
    int n,e; // n adalah jumlah nodes, e adalah jumlah edges
    cin >> n >> e; 
    u--;
    v--;
    for (int i = 0; i < e; i++)
    {
        int u,v; // u dan v menyatakan u terhubung ke v, v terhubung ke u (undirectional graph) 
        cin >> u >> v; 
        adj[u].push_back(v); 
        adj[v].push_back(u);
    }
    
}
int main()
{
    // adjencyMatriks 
    adjMatriks();    
    // adjencyList 
    adjList();
}