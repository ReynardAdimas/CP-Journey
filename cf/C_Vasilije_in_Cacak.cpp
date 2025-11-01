#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solution()
{
   ll n,k,x; 
   cin >> n >> k >> x; 
   ll minSum=0, maxSum=0; 
   minSum  = (k*(k+1))/2;
   maxSum  = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
   if(minSum <= x && x <= maxSum)
   {
    cout << "YES\n";
   }
   else 
   {
    cout << "NO\n";
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}