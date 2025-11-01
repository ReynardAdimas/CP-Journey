#include<bits/stdc++.h>
#define ll long long
using namespace std;

void bc()
{
    
}

void solution()
{
   int n; 
   cin >> n; 
   vector<pair<ll, pair<ll, string>>> tim1(n), tim2(n), num; 
   for(int i=0;i<n;i++)
   {
    string s; 
    cin >> s; 
    int a,b; 
    cin >> a >> b; 
    tim1[i].first = a, tim1[i].second.first = b, tim1[i].second.second = s; 
    tim2[i].first = b, tim2[i].second.first = a, tim2[i].second.second = s; 
   } 
   sort(tim1.begin(), tim1.end(), greater<int>()); 
   sort(tim2.begin(), tim2.end(), greater<int>()); 

   int cnt = 0; 
   map<string, ll> mp; 
   for(int i=0;i<n;i++)
   {
    if(cnt==6)
    {
        break;
    }
    if(!mp[tim1[i].second.second])
    {
        mp[tim1[i].second.second] = 1; 
        num.push_back(tim1[i]); 
        cnt++;
    }
   } 
   cnt = 0; 
   for(int i=0;i<n;i++)
   {
    if(cnt==6) break; 
    if(!mp[tim2[i].second.second])
    {
        mp[tim2[i].second.second] = 1; 
        swap(tim2[i].first, tim2[i].second.first); 
        num.push_back(tim2[i]); 
        cnt++;
    }
   } 
   sort(num.begin(), num.end(), greater<int>()); 
   ll len = num.size(); 
   ll ans = 0; 
   vector<string> gemas, cantik; 

   cout << ans << endl; 
   for(auto i:gemas) cout << i << " "; cout << "\n"; 
   for(auto i:cantik) cout << i << " "; cout << "\n"; 
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