#include<bits/stdc++.h>
using namespace std; 

void solution()
{
  int n; 
  cin >> n;
   bool prime[n]; 
   prime[0] = prime[1] = false; 
    for(int i=2;i<=n;i++)
    {
      for(int j=2*i;j<=n;j+=i) 
      {
        prime[j] = false;
      }
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