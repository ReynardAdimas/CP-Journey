#include<bits/stdc++.h>
using namespace std;

int lcsUtill(string& s1, string& s2, int idx1, int idx2, vector<vector<int>>& dp)
{
    if(idx1 < 0 || idx2 < 0) return 0; 
    if(dp[idx1][idx2] != -1) return dp[idx1][idx2]; 

    if(s1[idx1] == s2[idx2])
    {
        return dp[idx1][idx2] = 1 + lcsUtill(s1, s2, idx1-1, idx2-1, dp); 
    }
    else 
    {
        return dp[idx1][idx2] = max(lcsUtill(s1,s2,idx1,idx2-1,dp), lcsUtill(s1,s2,idx1-1,idx2,dp));
    }
}

int lcs(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size(); 
    vector<vector<int>> dp(n, vector<int>(m,-1)); 
    return lcsUtill(s1, s2, n-1, m-1, dp);
}

void solution()
{
   string s1 = "acd"; 
   string s2 = "ced"; 
   cout << "The Length of LCS is " << lcs(s1, s2) << "\n";
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