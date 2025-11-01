#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll m; 
vector<int> prime;

ll binpow(ll x, ll y)
{
    ll res = 1; 
    x%=m; 
    while(y>0)
    {
        if(y%2==1) res = (res*x) % m; 
        x = (x*x) % m; 
        y/=2;
    }
    return res;
} 

void sieve(int n)
{
    vector<bool> isPrime(n+1, 1); 
    isPrime[0] = isPrime[1] = false; 
    for(int i=2;i*i <= n;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isPrime[j] = false;
            }
        }
    } 
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]) prime.push_back(i);
    }
}

void solution()
{
   int n; 
   cin >> n; 
   vector<int> c(n); 
   int total = 0; 
   for(int i=0;i<n;i++)
   {
    cin >> c[i];
    total += c[i];
   } 

   ll ans = 1; 
   for(int x:prime)
   {
    if(x > total) break; 
    ll exp = 0; 
    ll pangkat = x; 

    while(pangkat <= total)
    {
        ll t = total / pangkat; 
        for(int val : c)
        {
            t -= val / pangkat;
        }
        exp += t; 

        if(pangkat > total/x) break; 
        pangkat *= x; 
    } 
    if(exp > 0)
    {
        ans = (ans * binpow(x, exp)) % m;
    }
   }
   cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    // pre
    sieve(5000);
    //t = 1;
    cin >> t >> m;
    while(t--)
    {
        solution();
    }

    return 0;
}