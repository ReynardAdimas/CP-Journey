#include<bits/stdc++.h>
#define ll long long
using namespace std; 

const int mod = 1e9+7;

void solution()
{
    int n;
    cin >> n;
    vector<int> dp(n+1);
    dp[0] = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i-j>=0)
            {
                dp[i] = (dp[i]+dp[i-j]) % mod;
            }
        }
    }
    cout << dp[n] << endl;
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