#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,k; 
   cin >> n >> k; 
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i]; 

   // vector dp 
   vector<int> dp(n, INT_MAX); 
   dp[0] = 0; 
   for(int i=1;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0) 
            {
                dp[i] = min(dp[i], dp[i-j] + abs(v[i]-v[i-j]));
            }
        }
    }
    cout << dp[n-1] << endl;
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