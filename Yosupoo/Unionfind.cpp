#include<bits/stdc++.h>
using namespace std;

struct DSU{
    int n; 
    vector<int> par; 
    vector<int> sz; 
    DSU(int n) : n(n) {
        par.assign(n+1,0); 
        for(int i=1;i<=n;i++) par[i] = i; 
        sz.assign(n+1,1);
    } 
    int rep(int x)
    {
        if(par[x]==x) return x; 
        else 
        {
            int r = rep(par[x]); 
            par[x] = r; 
            return r;
        }
    }
    void join(int x, int y)
    {
        x = rep(x), y=rep(y); 
        if(sz[x] < sz[y])
        {
            par[x] = y; 
            sz[y] += sz[x]; 
        }
        else 
        {
            par[y] = x; 
            sz[x] += sz[y];
        }
    } 
    bool check(int x, int y)
    {
        return (rep(x) == rep(y));
    }
};

void solution()
{
   int n,q;
   cin >> n >> q; 
   DSU dsu(n); 
   for(int i=0;i<q;i++)
   {
    int t,u,v; 
    cin >> t >> u >> v; 
    if(t==1)
    {
        cout << dsu.check(u,v) << "\n";
    }
    else 
    {
        dsu.join(u,v);
    }
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