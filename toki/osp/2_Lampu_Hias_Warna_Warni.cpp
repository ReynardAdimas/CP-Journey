#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

map<char, int> mp;

bool cmp(pair<char, int> a, pair<char, int> b)
{
    return a.second > b.second;
}

void solution()
{
   mp.clear();
   int n; 
   cin >> n;
   vector<pair<char, int>> v;
   for(int i=0;i<n;i++)
   {
    char c; 
    cin >> c; 
    mp[c]++;
   }
   for(auto& i : mp)
   {
    v.push_back({i.first, i.second});
   } 
   if(v.size() <= 2)
   {
    cout << -1 << endl;
     return;
   }
   sort(v.begin(), v.end(), cmp);
   for(auto& i : mp)
   {
    cout << i.first << " " << i.second << endl;
   }
   string res;
   char satu = v[0].first;
   res+=satu; 
   char dua = v[1].first;
   res+=dua; 
   char tiga = v[2].first;
   res+=tiga; 
   int i = 3;
   int kali = 1;
   while(i-(3*kali) < v.size())
   {
    if(v[i-(3*kali)].second > 0)
    {
        res+=v[i-(3*kali)].first;
    }
    else break;
    i++;
    kali++;
   }
   cout << res << endl;
   cout << res.length() << endl;

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