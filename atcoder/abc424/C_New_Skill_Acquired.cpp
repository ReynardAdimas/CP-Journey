#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   vector<vector<int>> adj(n+1); 
   vector<pair<int, int>> pre(n+1); 
   queue<int> q;
   vector<bool> visited(n+1, false); 
   int done = 0; 
   for(int i=1;i<=n;i++)
   {
    int a,b; 
    cin >> a >> b; 
    pre[i] = {a,b}; 
    if(a==0 and b==0)
    {
        if(!visited[i])
        {
            q.push(i); 
            visited[i] = true; 
            done++;
        }
    }
    else 
    {
        adj[a].push_back(i);
        adj[b].push_back(i);
    }
   } 
   while(!q.empty())
   {
    int currSkill = q.front(); 
    q.pop(); 
    for(int skill : adj[currSkill])
    {
        if(!visited[skill] and (visited[pre[skill].first] or visited[pre[skill].second]))
        {
            done++; 
            visited[skill] = true; 
            q.push(skill);
        }
    }
   } 
   cout << done << '\n';
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