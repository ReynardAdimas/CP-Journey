#include<bits/stdc++.h>
using namespace std; 

vector<int> adj[100]; 
stack<int> dfs; 
bool visited[100];

int main()  
{
    // contoh kasus 
    // diberikan sebuah graf 
    // cek apakah dari start bisa mencapai finish ? 
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

    // DFS alghorithm
    // pertama kunjungi start
    dfs.push(start);
    visited[start] = true; 
    // selama masih belum ada yang dikunjungi
    while(!dfs.empty())
    {
        // ambil satu node yang kita belum kunjungi
        int cur = dfs.top(); 
        dfs.pop();
        // untuk melihat urutan node yang sedang dikunjungi
        cout << cur << endl;
        // untuk semua tetangga node ini
        for(auto next:adj[cur])
        {
            // jika belum pernah dikunjungi
            if(!visited[next])
            {
                // coba kunjungi
                visited[next]=true; 
                dfs.push(next);
            }
        }
    }
    cout << "finish : " << visited[finish] << endl; // jika keluar 1 maka node finish terkunjungi, jika 0 belum terkunjungi(tidak terhubung)

    // untuk menghitung ada berapa CC(Connected Component)
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            ans++;
            // coba dfs dari i
        }
    } 
    cout << "ans:  " << ans << endl;


    return 0;
}