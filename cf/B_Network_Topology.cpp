#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,m;
   cin >> n >> m; 
   vector<int> adj(n+1,0); 
   for(int i=0;i<m;i++)
   {
    int a,b;
    cin >> a >> b; 
    adj[a]++;
    adj[b]++;
   } 
   map<int, int> cnt;
   for(int i=1;i<=n;i++)
   {
    cnt[adj[i]]++;
   }

   if(cnt[1] == n-1 && cnt[n-1] == 1)
   {
    cout << "star topology" << '\n';
   }
   else if(cnt[1] == 2 && cnt[2] == n-2)
   {
    cout << "bus topology" << '\n';
   }
   else if(cnt[2] == n)
   {
    cout << "ring topology" << '\n';
   }
   else 
   {
    cout << "unknown topology" << '\n';
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