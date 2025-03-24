#include<bits/stdc++.h>
#define ll long long
using namespace std; 

const int mod = 1e9+7;
int pw(int a, ll b)
{
    if(b==0) return 1; 
    if(b%2==0)
    {
        int p = pw(a,b/2);
        return 1LL * p * p % mod;
    }
    else 
    {
        int p = pw(a,(b-1)/2); 
        return 1LL * p * p % mod * a%mod;
    }
}
void solution()
{
   int a,b; 
   cin >> a >> b; 
   cout << pw(a,b) << endl;
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