#include<bits/stdc++.h>
#define ll long long
using namespace std; 

// optimasi knapsack    
void solution()
{
    int n,x; 
    cin >> n >> x; 
    vector<ll>dp(x+1,0);
   vector<int> price(n+1); 
   vector<int> pages(n+1); 
   for(int i=1;i<=n;i++) cin >> price[i];
   for(int i=1;i<=n;i++) cin >> pages[i];
   //dp[0][0] = 0; 
   // min weight, max value 
   // min price, max pages 
   for(int i=1;i<=n;i++)
   {
    for(int j=x;j>=price[i];j--)
    {
        dp[j] = max(dp[j], dp[j-price[i]]+pages[i]);
    }
   } 
   cout << dp[x] << endl;
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