#include<bits/stdc++.h>
using namespace std; 

const int mod = 1e9+7;

void solution()
{
   int n,x; 
   cin >> n >> x; 
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i];
   vector<int> dp(x+1,0); 
   dp[0] = 1;
   for(int c:v)
   {
     for(int i=c;i<=x;i++)
     {
        dp[i] = (dp[i] + dp[i-c]) % mod;
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