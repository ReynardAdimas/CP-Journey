#include<bits/stdc++.h>
using namespace std; 

vector<int> adj[100]; 
queue<int> bfs; 
bool visited[100];
int dist[100];
int pre[100]; // previous array 
int main()
{
    // shortest past pakai BFS unweighted
    // coba ngitung jarak terdekat antara 2 buah node 

    int n,e; 
    cin >> n >> e; 
    for (int i = 0; i < e; i++)
    {
        int u,v; // u dan v menyatakan u terhubung ke v, v terhubung ke u (undirectional graph) 
        cin >> u >> v; 
        adj[u].push_back(v); 
        adj[v].push_back(u);
    } 
    int start,finish; 
    cin >> start >> finish; 

    // set distance ke -1 semua
    memset(dist, -1, sizeof dist)
  
    // pertama kunjungi start
    bfs.push(start);
    dist[start] = 0; 
    // selama masih belum ada yang dikunjungi
    while(!bfs.empty())
    {
        // ambil satu node yang kita belum kunjungi
        int cur = bfs.front(); 
        bfs.pop();
        // untuk melihat urutan node yang sedang dikunjungi
        cout << cur << endl;
        // untuk semua tetangga node ini
        for(auto next:adj[cur])
        {
            // jika belum pernah dikunjungi
            if(dist[next]==-1)
            {
                // coba kunjungi
                dist[next]=dist[cur]+1; 
                bfs.push(next);
                pre[next] = cur;
            }
        }
    }
    cout << "finish : " << visited[finish] << endl;
    // klo mau ngeprint semua dist dari node 1 ke seluruh node 
    for(int i=0;i < n;i++)
    {
        cout << dist[i] << " "; // tanpa input finish
    }
    cout << endl; 

    
    // kalo pengen tau shortest  path lewat jalur mana aja : 1. use backtracking, 2. use previous array 1D
    vector<int> path; 
    int cur = finish; 
    path.push_back(cur); 
    while(cur != start)
    {
        cur = pre[cur]; 
        path.push_back(cur);
    }
    reverse(path.begin(),path.end());
    for(auto p:path) cout << p << " " << endl;
    return 0;
}