#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;

int64_t dfs(int u, int p, int depth, int64_t depthSum) {
    int64_t res = int64_t(depth) * depth - depthSum;

    cout << u << " " << depth << " " << depthSum << endl;

    for (auto v : adj[u]) {
        if (v == p) continue;

        res += dfs(v, u, depth + 1, depthSum + depth);
    }

    return res;
}

void solution()
{
    int N;
    cin >> N;

    adj.resize(N);
    for (int i = 1; i < N; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << dfs(0, -1, 0, 0) << endl;
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