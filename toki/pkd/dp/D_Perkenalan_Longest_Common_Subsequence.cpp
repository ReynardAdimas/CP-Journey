#include<bits/stdc++.h>
using namespace std;

int lcsUtill(vector<int> a, vector<int> b, int idx1, int idx2, vector<vector<int>>& dp)
{
    if(idx1 <0 || idx2 < 0) return 0; 
    if(dp[idx1][idx2] != -1) return dp[idx1][idx2]; 
    
    if(a[idx1] == b[idx2])
    {
        return dp[idx1][idx2] = 1 + lcsUtill(a,b,idx1-1,idx2-1, dp); 
    }
    else 
    {
        return dp[idx1][idx2] = max(lcsUtill(a,b,idx1-1,idx2,dp), lcsUtill(a,b,idx1, idx2-1, dp));
    }
}

int lcs(vector<int> a, vector<int> b)
{
    int n = a.size(); 
    int m = b.size(); 
    vector<vector<int>> dp(n, vector<int>(m,-1)); 
    return lcsUtill(a,b,n-1,m-1,dp);
}

void solution()
{
   int n; 
   cin >> n;
   vector<int> a(n), b(n); 
   for(int i=0;i<n;i++)
   {
    cin >> a[i];
   }
   for(int i=0;i<n;i++)
   {
    cin >> b[i];
   }
   cout << lcs(a,b);

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