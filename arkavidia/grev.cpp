#include<bits/stdc++.h>
using namespace std; 

#define INF 1e18
struct Edge {
    int to, travelTime, switchTime;
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
    bool arahAwal = (X<Y);
    while (!pq.empty()) {
        State top = pq.top();
        pq.pop();
        long long currTime = top.currTime;
        int node = top.node;
        cout << "currtime: " << currTime << " node: " << node << endl;
        if (node == Y) return currTime; 
        if (currTime > dist[node]) continue; 
        for (auto &edge : graph[node]) {
            int neighbor = edge.to;
            long long travelTime = edge.travelTime;
            long long switchTime = edge.switchTime;
            long long waitTime = 0;
            cout << "neighbor : " << neighbor << " traveltime: " << travelTime << " swithctime: " << switchTime << endl;    
            bool arahBener = ((currTime/switchTime)%2)==((node<neighbor));
            cout << "arah bener: " << arahBener << endl;
            // kalo kebalik nunggu, kalo ga kebalik langsung
            if (arahBener) { 
                waitTime = switchTime - (currTime%switchTime);
                cout << "wait time : " << waitTime << endl;
                //nextTime = currTime + travelTime + waitTime;
            }
            long long nextTime = currTime + waitTime + travelTime;
            if (nextTime < dist[neighbor]) {
                dist[neighbor] = nextTime;
                pq.push({nextTime, neighbor});
            }
        }
    }
    return -1; 
}
void solution()
{
  int n,k; 
  cin >> n >> k; 
  vector<vector<Edge>> graf(n+1); 
  for(int i=0;i<k;i++)
  {
    int a,b,c,t; 
    cin >> a >> b >> c >> t;
    graf[a].push_back({b,c,t}); 
    graf[b].push_back({a,c,t});
  }
  int x,y; 
  cin >> x >> y; 
  cout << magicBridge(n,k,graf,x,y) << endl;
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