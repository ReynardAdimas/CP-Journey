#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   int maks = 1e5+7; 
   vector<ll> p(maks,0);

   int maksVal = 0; 
   for(int i=0;i<n;i++)
   {
    int x; 
    cin >> x; 
    p[x] += x; 
    if(x > maksVal)
    {
        maksVal = x;
    }
   } 
   vector<ll> dp(maksVal+1, 0); 
   dp[0] = 0; 
   if(maksVal>0)
   {
    dp[1] = p[1];
   } 

   for(int i=2; i<=maksVal;i++)
   {
    dp[i] = max(dp[i-1], dp[i-2]+(p[i]));
   } 
   cout << dp[maksVal] << "\n";

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