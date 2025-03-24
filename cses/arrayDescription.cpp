#include<bits/stdc++.h>
using namespace std; 
const int mod = 1e9+7;

void solution()
{
   int n,m; 
   cin >> n >> m;
   vector<int> a(n); 
   for(int i=0;i<n;i++) cin >> a[i];
   vector<vector<int>> dp(n, vector<int>(m+1, 0)); 
   // inisialisasi dp
   if(a[0]==0)
   {
    for(int x=1;x<=m;x++) dp[0][x] =1;
   }
   else 
   {
    dp[0][a[0]] = 1;
   }

   // ngsisi dp
   for(int i=1;i<n;i++)
   {
    if(a[i]==0)
    {
        for(int x=1;x<=m;x++)
        {
            dp[i][x] = dp[i-1][x];
            //dp[i][x] = (dp[i-1][x] + dp[i-1][x-1])%mod + dp[i-1][x+1]%mod; 
            if(x>1) dp[i][x] = (dp[i][x] + dp[i-1][x-1]) % mod; 
            if(x<m) dp[i][x] = (dp[i][x] + dp[i-1][x+1]) % mod; 
        }
    }
    else 
    {
        int x = a[i]; 
        dp[i][x] = dp[i-1][x];
        //dp[i][x] = (dp[i-1][x] + dp[i-1][x-1])%mod + dp[i-1][x+1]%mod; 
        if(x>1) dp[i][x] = (dp[i][x] + dp[i-1][x-1]) % mod; 
        if(x<m) dp[i][x] = (dp[i][x] + dp[i-1][x+1]) % mod; 
    }
   } 
   int ans = 0;
   for(int x=1;x<=m;x++) ans = (ans + dp[n-1][x]) % mod; 
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