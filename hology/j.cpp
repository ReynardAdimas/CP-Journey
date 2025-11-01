#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n,m; 
   cin >> n >> m; 

   if(m%2!=0)
   {
    for(int i=0;i<n-1;i++)
    {
        cout << n << " ";
    }
    cout << n-1 << "\n";
    cout << 1 << "\n";
   }
   else 
   {
    for(int i=2;i<=n;i++)
    {
        cout << i << " ";
    }
    cout << 1 << "\n";
    ll k = (long long)n * (n-1)/2; 
    cout << k << "\n";
   }
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