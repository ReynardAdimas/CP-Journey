#include<bits/stdc++.h> 
using namespace std; 


int dp[50005]={0};
int main()
{ 
    int k; 
    int n; 
    cin >> n; 
    int coin[n];
    for(int i=0;i<n;i++)
    {
        cin >> coin[i];
    } 
    cin >> k;
    for(int i=1;i<=k;i++)
    {
        dp[i]=1e8; 
        for(int j=0;j<n;j++)
        {
            if(coin[j]>i) break; 
            dp[i]=min(dp[i],1+dp[i-coin[j]]);
        }
    } 
    if(dp[k]==1e8) cout << -1 << endl; 
    else cout << dp[k] << endl;
}