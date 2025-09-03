#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   vector<vector<ll>> v(n);
   for(int i=0;i<n;i++)
   {
    int m; 
    cin >> m;
    v[i].resize(m);
    for(int j=0;j<m;j++)
    {
        int a; 
        cin >> a; 
        v[i][j] = a;
    }
   } 

   for(int i=0;i<n;i++)
   {
    sort(v[i].begin(), v[i].end());
   } 
   vector<int> dump; 
   for(int i=0;i<n;i++)
   {
    dump.push_back(v[i][0]);
    v[i].erase(v[i].begin());
   }
   ll ans = 0;
   ll idx = -1;
   ll minim_kedua_terkecil = LONG_LONG_MAX; 
   for(int i=0;i<n;i++)
   {
    // int maks = *max_element(v[i].begin(), v[i].end());
    // if(maks > ans)
    // {
    //     ans = maks; 
    //     idx = i;
    // }
    int minim = *min_element(v[i].begin(), v[i].end());
    if(minim < minim_kedua_terkecil) 
    {
        minim_kedua_terkecil = minim; 
        idx = i;
    }
   } 

   // pindahkan semua dump ke idx array 
   for(int i=0;i<n;i++)
   {
    v[idx].push_back(dump[i]);
   } 

   sort(v[idx].begin(), v[idx].end()); 

   for(int i=0;i<n;i++)
   {
    ans += *min_element(v[i].begin(), v[i].end());
   }

   cout << ans << "\n";

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