// find smallest prime factor using sieve 
#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    // contoh smallest_prime[4] = 2 --> 2*2 
    // smallest_prime[9] = 3 --> 3*3
    smallest_prime[i] = -1;
   for(int i=2;i<=n;i++)
   {
    for(int j=i;j<=n;j+=i)
    {
        if(smallest_prime[j]==-1)
        {
            smallest_prime[j] = i;
        }
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