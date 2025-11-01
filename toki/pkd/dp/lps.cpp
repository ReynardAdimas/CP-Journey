// longest palindrom subsequence 
#include<bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2)
{
    int n = s1.size();
    int m = s1.size(); 

    vector<vector<int>> dp(n+1, vector<int>(m+1,-1)); 
    for(int i=0;i<=n;i++)
    {
        dp[i][0] = 0; 
    }
    for(int i=0;i<=m;i++)
    {
        dp[0][i] = 0;
    } 

    for(int idx = 1;idx<=n;idx++)
    {
        for(int idx2=1;idx2<=m;idx2++)
        {
            if(s1[idx-1] == s2[idx2-1])
            {
                dp[idx][idx2] = 1 + dp[idx-1][idx2-1];
            }
            else 
            {
                dp[idx][idx2] = max(dp[idx-1][idx2], dp[idx][idx2-1]);
            }
        }
    } 
    return dp[n][m];
} 

int lps(string s)
{
    string t = s; 
    reverse(s.begin(), s.end()); 

    return lcs(s,t);
}

void solution()
{
   string s = "kedua"; 
   cout << "The length of longest palindrom subsequence" << lps(s) << "\n";
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