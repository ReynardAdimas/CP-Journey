#include<bits/stdc++.h>
using namespace std; 
vector<vector<int>> adj; 
vector<int> subordinates;

int dfs(int node)
{
    int cnt = 0; 
    for(int child:adj[node])
    {
        cnt += 1+dfs(child);
    }
    return subordinates[node] = cnt;
}

void solution()
{
   int n;
   cin >> n;
   adj = vector<vector<int>>(n+1);
   subordinates = vector<int>(n+1,0);

   for(int i=2;i<=n;i++)
   {
    int boss; 
    cin >> boss; 
    adj[boss].push_back(i);
   }
   dfs(1); 
   for(int i=1;i<=n;i++)
   {
    cout << subordinates[i] << " ";
   }
   cout << endl;
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