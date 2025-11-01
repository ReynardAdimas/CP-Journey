// Course Schedule - CSES

#include<bits/stdc++.h>

using namespace std;



vector<vector<int>> adj;

vector<int> color; // 0 blm dikunjungi, 1 sedang dikunjungi, 2 sudah dikunjungi

vector<int> ans;

bool cycle = false;



void dfs(int v)

{

    if(cycle) return;



    color[v] = 1;

    for(int u:adj[v])

    {

        if(color[u] == 0) dfs(u);

        else if(color[u] == 1)

        {

            cycle = true;

            return;

        }

    }

    color[v] = 2;

    ans.push_back(v);

}



// void topoSort(int n)

// {

//     visited.assign(n, false);

//     ans.clear();

//     for(int i=0;i<n;++i)

//     {

//         if(!visited[i]) dfs(i);

//     }

//     reverse(ans.begin(), ans.end());

// }



void solution()

{

   int n,m;

   cin >> n >> m;

   adj.resize(n+1);

   color.assign(n+1,0);

   ans.clear();

   cycle = false;

   for(int i=0;i<m;i++)

   {

    int a,b;

    cin >> a >> b;

    adj[a].push_back(b);

   }

   for(int i=1;i<=n;++i)

   {

    if(color[i]==0) dfs(i);

   }

   if(cycle)

   {

    cout << "IMPOSSIBLE\n";

   }

   else

   {

    reverse(ans.begin(), ans.end());

    for(auto x:ans)

    {

        cout << x << " ";

    }

    cout << "\n";

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