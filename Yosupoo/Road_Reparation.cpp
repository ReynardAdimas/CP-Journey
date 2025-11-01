// Road Reparation - CSES
#include<bits/stdc++.h>
using namespace std;

struct Edge{
    int u,v,weight; 
    bool operator<(Edge const &other) 
    {
        return weight < other.weight;
    }
};

vector<int> parent;
vector<int> rnk;
int findSet(int v)
{
    if(parent[v]==v) return v; 
    else return parent[v] = findSet(parent[v]);
}

bool unionSet(int a, int b)
{
    a = findSet(a); 
    b = findSet(b); 
    // cout << a << " " << b << " " << rnk.size() << " " << parent.size() << endl;
    if(a==b) return false; 
    if(rnk[a] < rnk[b]) swap(a,b); 
    parent[b] = a;
    if(rnk[a] == rnk[b]) rnk[a]++; 
    return true; 

}

void solution()
{
   int n,m; 
   cin >> n >> m;
   vector<Edge> edges(m); 
   for(int i=0;i<m;i++)
   {
    cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    edges[i].u--; 
    edges[i].v--;
   }

   sort(edges.begin(), edges.end()); 
   long long cost = 0; 
   int taken = 0;
   parent.resize(n); 
   rnk.resize(n); 
   for(int i=0;i<n;i++) parent[i] = i; 

   for(auto &e : edges)
   {
    // cout << e.u << " " << e.v << " " << e.weight << endl;
    if(unionSet(e.u, e.v))
    {
        // cout << "B" << endl;
        cost+=e.weight; 
        taken++;
    }
    // cout << "A" << endl;
   } 
   if(taken != n-1)
   {
    cout << "IMPOSSIBLE" << "\n";
   }
   else cout << cost << "\n";
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