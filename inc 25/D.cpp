#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solution()
{
    int n,m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> edge(n+1);

    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        edge[x].push_back({y,z});
        edge[y].push_back({x,z});
    }

    vector<bool> vis(n+1, 0);

    vector<ll> dist(n+1, LLONG_MAX);
    vector<ll> p(n+1, -1);

    priority_queue<pair<ll, int>, vector<pair<ll,int>>, greater<>> pq;

    pq.push({0,1});
    dist[1] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        // cout << "Visit " << u << endl;
        pq.pop();
        if(vis[u]) continue;
        if(u == 2) break;
        vis[u] = 1;
        for(auto [x,y] : edge[u]){
            ll nc = dist[u] + y;
            if(nc < dist[x]){
                dist[x] = nc;
                p[x] = u;
                pq.push({nc, x});
            }
        }
    }
    
    ll ans = dist[2];
    int u = 2;
    while (u != 1)
    {
        int v = p[u];

        for (auto &[x, y] : edge[v]) {
            if (x == u) {
                // cout << "Bagi  " << v << " " << x << " " << y << " ";
                int adder = y % 2;
                y /= 2;
                y += adder;
                // cout << y << endl;
            }
        }
        for (auto &[x, y] : edge[u]) {
            if (x == v) {
                // cout << "Bagi  " << u << " " << x << " " << y << " ";
                int adder = y % 2;
                y /= 2;
                y += adder;
                // cout << y << endl;
            }
        }

        u = v;
    }

    // cout << ans << endl;

    vis.assign(n+1, 0);
    dist.assign(n+1, LLONG_MAX);
    while (!pq.empty()) pq.pop();

    pq.push({0,2});
    dist[2] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if(vis[u]) continue;
        if(u == 3) break;
        vis[u] = 1;
        for(auto [x,y] : edge[u]){
            ll nc = dist[u] + y;
            // cout << "Nc " << y << endl;
            if(nc < dist[x]){
                dist[x] = nc;
                pq.push({nc, x});
            }
        }
    }

    // cout << dist[1] << endl;
    // cout << dist[3] << endl;
    ans += dist[3];
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