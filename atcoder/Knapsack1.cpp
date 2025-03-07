#include<bits/stdc++.h>
#define ll long long
using namespace std; 
const int MAX_N = 105; 
const int MAX_W = 1e5 + 5;

ll dp[MAX_N][MAX_W];

void solution()
{
   int N,W;
   cin >> N >> W; 
   vector<int> w(N+1), v(N+1);
   for(int i=1;i<=N;i++)
   {
    cin >> w[i] >> v[i];
   }

   for(int i=1;i<=N;i++)
   {
    for(int j=0;j<=W;j++)
    {
        // gak ambil barang 
        dp[i][j] = dp[i-1][j];

        // ambil barang klo muat 
        if(j >= w[i])
        {
            dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]]+v[i]);
        }
    }
   } 
   cout << dp[N][W] << endl;
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
