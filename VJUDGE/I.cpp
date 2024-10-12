#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,k; 
    cin >> n >> k; 
    int h[n]; 
    for(int i=0;i<n;i++) cin >> h[i];

    vector<int> dp(n,0); 
    dp[0] = 0; 
    for(int i=1;i<n;i++)
    {
        int r = INT_MAX;
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0)
            {
                int l = dp[i-j] + abs(h[i]-h[i-j]); 
                r = min(l,r);
            }
        } 
        dp[i]=r;
    }
    cout << dp[n-1]%1000005;
}