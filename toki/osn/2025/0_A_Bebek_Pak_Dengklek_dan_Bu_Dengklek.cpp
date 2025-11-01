#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solution()
{
   int n; 
   cin >> n;
   vector<ll> v(n); 
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   } 
   reverse(v.begin(), v.end()); 
   for(auto x:v)
   {
    cout << x << "\n";
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