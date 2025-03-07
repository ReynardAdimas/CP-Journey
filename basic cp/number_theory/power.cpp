#include<bits/stdc++.h>
using namespace std; 
const int mod = 1e9+7; 
typedef long long ll;
int count1(int a, int b)
{
    int ans = 1; 
    for(int i=1;i<=b;i++)
    {
        ans = 1LL * ans * a % mod;
    }
    return ans;
}


int count2(int a, ll b)
{
    if(b==0) return 1; 
    if(b%2==0)
    {
        int p = count2(a,b/2); 
        return 1LL*p*p%mod;
    }
    else 
    {
        int p = count2(a,(b-1)/2); 
        return 1LL*p*p%mod*a%mod;
    }
}

void solution()
{
   cout << "Hello World" << endl;
   int a,b; 
   cin >> a >> b; 
   // count a^b
   // if b <= 10^6
   cout << count1(a,b) << endl; 
   // if a <= 10^9, b <= 10^18 
   cout << count2(a,b) << endl;
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