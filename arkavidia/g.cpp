#include <bits/stdc++.h>
using namespace std;

#define INF 1e18

struct Edge {
    int to;
    long long travelTime, switchTime;
};

struct State {
    long long currTime;
    int node;
    bool operator>(const State &other) const {
        return currTime > other.currTime;
    }
};

long long magicBridge(int N, int K, vector<vector<Edge>> &graph, int X, int Y) {
    vector<long long> dist(N + 1, INF);
    priority_queue<State, vector<State>, greater<State>> pq;

    pq.push({0, X});
    dist[X] = 0;

    while (!pq.empty()) {
        State top = pq.top();
        pq.pop();
        long long currTime = top.currTime;
        int node = top.node;

        if (node == Y) return currTime;  // Jika sampai ke tujuan, return waktu

        if (currTime > dist[node]) continue;  // Skip jika sudah ada jalur lebih optimal

        for (auto &edge : graph[node]) {
            int neighbor = edge.to;
            long long travelTime = edge.travelTime;
            long long switchTime = edge.switchTime;

            long long waitTime = 0;
            // Hitung apakah jembatan dalam arah yang salah
            if ((currTime / switchTime) % 2 == 1) {
                waitTime = switchTime - (currTime % switchTime);
            }

            long long nextTime = currTime + waitTime + travelTime;

            // Jika waktu tempuh lebih kecil, update jalur
            if (nextTime < dist[neighbor]) {
                dist[neighbor] = nextTime;
                pq.push({nextTime, neighbor});
            }
        }
    }
    return -1;  // Tidak ada jalur ke Y
}

void solution() {
    int n, k;
    cin >> n >> k;
    vector<vector<Edge>> graph(n + 1);

    for (int i = 0; i < k; i++) {
        int a, b;
        long long c, t;
        cin >> a >> b >> c >> t;
        graph[a].push_back({b, c, t});  // Tambahkan hanya jalur satu arah
    }

    int x, y;
    cin >> x >> y;

    cout << magicBridge(n, k, graph, x, y) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    
    int t = 1;
    while (t--) {
        solution();
    }
    return 0;
}
