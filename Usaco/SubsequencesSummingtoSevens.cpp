#include<bits/stdc++.h>
#define ll long long
using namespace std; 

const int mod = 7;

void solution()
{
   int n; 
   cin >> n;
   ll ans = 0; 
   vector<ll> id(mod, -1);
   id[0] = 0; 
   
   int curr_remainder = 0; 
   for(int i=1;i<=n;i++)
   {
    int cow; 
    cin >> cow; 
    curr_remainder = (curr_remainder+cow)%mod; 
    if(id[curr_remainder] == -1)
    {
        id[curr_remainder] = i;
    }
    else 
    {
        ans = max(ans, i-id[curr_remainder]);
    }
   }
   
   cout << ans << endl;
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