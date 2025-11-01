#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Edge{
    int to;
    int w;
};
vector<ll> bfs(int start, int n, vector<vector<Edge>>& v)
{
    vector<ll> dist(n+1, LLONG_MAX); 
    queue<int> q; 
    dist[start] = 0; 
    q.push(start); 

    while(!q.empty())
    {
        int u = q.front(); 
        q.pop(); 
        for(auto& edge : v[u]) 
        {
            int v_node = edge.to;
            int w = edge.w;
            if(dist[v_node] == LLONG_MAX) 
            {
                dist[v_node] = dist[u]+w;
                q.push(v_node);
            }
        }
    } 
    return dist;
}

template<typename T>
struct BIT {
    int n;
    vector<T> tree;

    BIT(int _n) : n(_n), tree(_n + 1, 0) {}
    void update(int idx, T val) {
        for (; idx <= n; idx += idx & -idx) {
            tree[idx] += val;
        }
    }
    T query(int idx) {
        T sum = 0;
        for (; idx > 0; idx -= idx & -idx) {
            sum += tree[idx];
        }
        return sum;
    }
    T query_range(int l, int r) {
        if (l > r) return 0;
        return query(r) - query(l - 1);
    }
};


void solution()
{
    int n,s1,s2; 
    cin >> n >> s1 >> s2; 
    vector<vector<Edge>> g(n+1); 
    for(int i=0;i<n-1;i++)
    {
        int u,v,w; 
        cin >> u >> v >> w; 
        g[u].push_back({v,w});
        g[v].push_back({u,w});          
    } 

    
    auto dist1 = bfs(s1, n, g); 
    auto dist2 = bfs(s2, n, g); 

    vector<pair<ll, ll>> vp; 
    vector<ll> bc; 
    
    for(int i=1;i<=n;i++)
    {
        vp.push_back({dist1[i], dist2[i]});
        bc.push_back(dist2[i]);
    } 
    sort(vp.begin(), vp.end());
    sort(bc.begin(), bc.end());
    bc.erase(unique(bc.begin(), bc.end()), bc.end());
    
    map<ll, int> b_map; 
    int M = 0; 
    for(ll val : bc) {
        b_map[val] = ++M; 
    }

    
    BIT<ll> bit_count(M);
    BIT<ll> bit_sum(M);
    ll ans = 0; 
    for(int i = n-1; i >= 0; i--)
    {
        ll A_i = vp[i].first;
        ll B_i = vp[i].second;
        int c_B = b_map[B_i]; 
        auto it_A = b_map.lower_bound(A_i);
        int c_A = (it_A == b_map.end()) ? (M + 1) : it_A->second;
        ll count1 = bit_count.query_range(c_B, M);
        ans += count1 * max(A_i, B_i);
        if (B_i <= A_i) {
            ll count2 = bit_count.query_range(1, c_B - 1);
            ans += count2 * A_i;
        } else {
            ll count2a = bit_count.query_range(1, c_A - 1);
            ans += count2a * A_i;
            ll sum2b = bit_sum.query_range(c_A, c_B - 1);
            ans += sum2b;
        }
        bit_count.update(c_B, 1);
        bit_sum.update(c_B, B_i); 
    } 
    
    cout << ans << "\n";
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