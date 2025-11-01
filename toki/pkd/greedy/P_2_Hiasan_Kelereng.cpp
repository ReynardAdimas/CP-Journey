#include<bits/stdc++.h>
using namespace std;

map<char, int> mp;
vector<char> v;
void solution()
{
    mp.clear(); 
    v.clear();
   /* 
   N buah kelereng, dinyatakan dalam warna 'A'-'Z' 
   - Baris harus setidaknya 3 buah kelereng 
   - 3 kelereng pertama memiliki warna yang berbeda 
   - i > 3, warna ke-i sama dengan ke(i-3) 
   hiasan dengan banyak kelereng maksimal 
   */ 
   int n; 
   cin >> n; 
   for(int i=0;i<n;i++)
   {
    char a; 
    cin >> a; 
    mp[a]++;
   } 
   int sz = mp.size(); 
   if(sz < 3)
   {
    cout << -1 << '\n';
    return;
   }
   vector<pair<char, int>> vec(mp.begin(), mp.end()); 
   sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
    return a.second > b.second;
   }); 
   for(int i=0;i<3;i++)
   {
    v.push_back(vec[i].first); 
    vec[i].second--;
   } 
   int s = vec.size();
   bool ok = true;
   int i = 3; 
   while (ok)
   {
    int idx = i%3;
    if(vec[idx].second > 0)
    {
        v.push_back(vec[idx].first); 
        vec[idx].second--;
        i++;
    }
    else 
    {
        ok = false;
    }
    
   }
   if(v.size() < 3) cout << -1 << '\n'; 
   else cout << v.size() << '\n';
   
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