#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,m,k; 
   cin >> n >> m >> k; 
   vector<pair<string, string>> vp(n); 
   for(int i=0;i<n;i++)
   {
    string a,b; 
    cin >> a >> b; 
    vp[i].first = a; 
    vp[i].second = b;
   }
   map<string, int> mp; 
   for(int i=0;i<m;i++)
   {
    mp[vp[i].second]++;
   }
   vector<string> gt;
   map<string, bool> gt_dapet; 
   for(int i=m;i<n;i++)
   {
    if(gt.size() ==k) break; 
    bool cek = mp.count(vp[i].second); 
    bool udah = gt_dapet.count(vp[i].second); 
    if(!cek && !udah)
    {
        gt.push_back(vp[i].first); 
        gt_dapet[vp[i].second] = true;
    }
   } 
   cout << gt.size() << "\n"; 
   for(auto x:gt)
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