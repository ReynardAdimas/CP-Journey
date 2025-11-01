#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n,k;
   cin >> n >> k;
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i]; 
   ll cnt = 0; 
   map<ll,int> sum; 
   ll pref = 0; 
   sum[0] = 1; 
   for(int i=0;i<n;i++)
   {
    pref+=v[i]; 
    cnt+=sum[pref-k];
    sum[pref]++;
   }
   cout << cnt << "\n";
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