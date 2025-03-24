#include<bits/stdc++.h>
using namespace std; 

bool cek[1000][1000]; 
int dp[1000][1000];
const int mod = 1e9+7;

void solution()
{
   int n; 
   cin >> n; 
   for(int i=0;i<n;i++)
   {
    string s; 
    cin >> s; 
    for(int j=0;j<s.length();j++)
    {
        if(s[j]=='.') cek[i][j] = true; 
        else cek[i][j] = false;
    }
}
dp[0][0] = 1;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(!cek[i][j]) dp[i][j] = 0;
        else
        {
            if(i>0) dp[i][j] += dp[i-1][j];
            if(j>0) dp[i][j] += dp[i][j-1]; 
            dp[i][j] %= mod; 
        }
    }
}
    cout << dp[n-1][n-1] << endl;
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