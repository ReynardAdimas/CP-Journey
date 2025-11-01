#include<bits/stdc++.h>
using namespace std;

const int maxn = 200019; 
vector<int> adj[maxn];

int dfs(int u, int parent, int& diameter)
{
    int maxPath1=0; // jalur terpanjang ke bawah dari u 
    int maxPath2=0; // jalur terpanjang kedua ke bawah dari u 

    for(int v:adj[u])
    {
        if(v==parent) continue;
        int childPath = 1 + dfs(v,u,diameter); 
        if(childPath > maxPath1)
        {
            maxPath2 = maxPath1;
            maxPath1 = childPath;
        }
        else if(childPath > maxPath2)
        {
            maxPath2 = childPath;
        }
    } 
    diameter = max(diameter, maxPath1+maxPath2); 
    return maxPath1;
}

void solution()
{
   int n; 
   cin >> n;
   for(int i=0;i<n-1;i++)
   {
        int u,v; 
        cin >> u >> v; 
        adj[u].push_back(v);
        adj[v].push_back(u);
   } 
   int diameter = 0; 
   dfs(1, 0, diameter); 
   cout << diameter << "\n";


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