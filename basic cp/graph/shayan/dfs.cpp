#include <bits/stdc++.h>
using namespace std;

const int N = 100; 
vector<int> adj[N]; // daftar tetangga
bool vis[N]; // array untuk menandai node yang sudah dikunjungi
int counter=0;

// Fungsi DFS untuk traversal graf --> for find out the graph is connected or not
void traverse(int v)
{
    vis[v] = true;
    counter++;
    for (int u : adj[v]) // iterasi semua tetangga node v
    {
        if (!vis[u]) // jika belum dikunjungi
        {
            traverse(u); // lakukan DFS ke node u
        }
    }
}

void solution()
{
    int n, m; 
    cin >> n >> m; // input jumlah node dan edge

    // Reset adjacency list dan visited array
    for (int i = 0; i < N; i++)
    {
        vis[i] = false;
    }

    for (int i = 0; i < m; i++)
    {
        int u, v; 
        cin >> u >> v; 
        // graf tidak berarah
        adj[u].push_back(v); 
        adj[v].push_back(u);
    }

    // Mulai traversal DFS dari node 1
    traverse(1);
    for(int i=0;i<n;i++)
    {
        cout << i << " " << vis[i] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t;
    cin >> t; // jumlah test case
    while (t--)
    {
        solution();
    }

    return 0;
}
