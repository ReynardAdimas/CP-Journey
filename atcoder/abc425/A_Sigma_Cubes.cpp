#include<bits/stdc++.h>
using namespace std;


void solution()
{
   int n; 
   cin >> n; 
   int ans = 0; 
   for(int i=1;i<=n;i++)
   {
    int t = pow(i,3);
    if(i%2!=0)
    {
        ans -= t;
    }
    else 
    {
        ans += t;
    }
   }
   cout << ans << '\n';
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