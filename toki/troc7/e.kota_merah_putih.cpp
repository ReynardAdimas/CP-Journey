#include<bits/stdc++.h>
using namespace std;

const int maxn = 100005; 
vector<int> adj[maxn]; 
int n;

pair<int, int> bfs(int start, int parent[], int U=-1, int V=-1)
{
    int dist[maxn]; 
    for(int i=1;i<=n;i++)
    {
        dist[i] = -1; 
        parent[i] = 0;
    }
    queue<int> q; 
    q.push(start); 
    dist[start] = 0; 
    int terjauh = start; 
    int maxDist = 0; 
    while(!q.empty())
    {
        int u = q.front(); 
        q.pop(); 
        
        // update 
        if(dist[u] > maxDist)
        {
            maxDist = dist[u]; 
            terjauh = u;
        } 

        for(int v:adj[u])
        {
            //cek potong 
            if((u == U && v == V) || (u == V && v == U)) continue; 
            if(dist[v] == -1)
            {
                dist[v] = dist[u] +1; 
                parent[v] = u; 
                q.push(v);
            }
        }
    }
    return {terjauh, maxDist};
}

int get_diameter(int start, int U=-1, int V = -1)
{
    int parentTemp[maxn]; 
    pair<int, int> terjauh1 = bfs(start, parentTemp, U, V); 
    pair<int, int> terjauh2 = bfs(terjauh1.first, parentTemp, U, V); 
    return terjauh2.second;
}

void solution()
{
    cin >> n; 
    for(int i=0;i<n-1;i++)
    {
        int u,v; 
        cin >> u >> v; 
        adj[u].push_back(v);
        adj[v].push_back(u);
    } 

    int parentPath[maxn]; 
    pair<int, int> endA = bfs(1, parentPath); 
    int nodeA = endA.first; 

    pair<int, int> endB = bfs(nodeA, parentPath); 
    int nodeB = endB.first; 
    int diameter = endB.second; 

    vector<int> diameter_path; 
    int curr = nodeB; 
    while(curr != 0)
    {
        diameter_path.push_back(curr); 
        curr = parentPath[curr]; 
    }
    reverse(diameter_path.begin(), diameter_path.end()); 
    int k = (diameter-1)/2; 
    int u = diameter_path[k]; 
    int v = diameter_path[k+1]; 
    int d1 = get_diameter(u, u, v); 
    int d2 = get_diameter(v,u,v); 
    cout << max(d1, d2) << "\n";
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