#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,x; 
   cin >> n >> x; 
   vector<int> coins(n); 
   for(int i=0;i<n;i++) cin >> coins[i];

   vector<int> dp(x+1, INT_MAX); 
   dp[0] = 0; 
   for(int i=1;i<=x;i++)
   {
    for(int c : coins)
    {
        if(i-c>=0 && dp[i-c] != INT_MAX)
        {
            dp[i] = min(dp[i], dp[i-c]+1);
        }
    }
   }
   if(dp[x] == INT_MAX)
   {
    cout << -1 << endl;
   }
   else cout << dp[x] << endl;
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