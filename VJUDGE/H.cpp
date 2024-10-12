#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n; 
    cin >> n; 
    int h[n]; 
    for(int i=0;i<n;i++) cin >> h[i];

    vector<int> dp(n,0); 
    dp[0] = 0; 
    for(int i=1;i<n;i++)
    {
        int l = dp[i-1] + abs(h[i]-h[i-1]); 
        int r = INT_MAX; 
        if(i>1) r = dp[i-2] + abs(h[i]-h[i-2]);
        dp[i]=min(l,r);
    }
    cout << dp[n-1];
}