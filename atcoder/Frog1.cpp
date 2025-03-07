// kalo pas loncat mau loncat ke batu i dari i-1(loncat 1 kali)
// dp[i] = dp[i-1] + |h[i] - h[i-1]|
// kalo pas loncat mau loncat ke batu i dari i-2(loncat 2 kali)
// dp[i] = dp[i-2] + |h[i] - h[i-2]| 

#include<bits/stdc++.h>
using namespace std; 


void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i]; 

    //vector dp 
    vector<int> dp(n,INT_MAX);
    dp[0] = 0; 
    for(int i=1;i<n;i++)
    {
        dp[i] = min(dp[i], dp[i-1]+abs(v[i]-v[i-1]));
        if(i>1)
        {
            dp[i] = min(dp[i],dp[i-2]+abs(v[i]-v[i-2]));
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