#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<ll, ll>> kandang; 
vector<ll> bebek;
void solution()
{
    kandang.clear();
    bebek.clear();
   /*
   Punya K kandang, dengan P[k] adalah kapasitas masing-masing kandang 
   C[k] adalah biaya angkut per kg dari berat bebek 
   Ada N bebek, dengan B[n] berat masing-masing bebek 
   cari biaya pengangkutan paling kecil 
   */
   ll k, n;
   cin >> k; 
   kandang.resize(k);
   for(ll i=0;i<k;i++)
   {
    ll p; 
    cin >> p;
    kandang[i].second = p;
   }
   for(ll i=0;i<k;i++)
   {
    ll c;
    cin >> c; 
    kandang[i].first = c;
   }
   cin >> n;
   bebek.resize(n); 
   for(ll i=0;i<n;i++)
   {
    cin >> bebek[i];
   }
   sort(bebek.begin(), bebek.end(), greater<ll>()); 
   sort(kandang.begin(), kandang.end());
//    sort(kandang.begin(), kandang.end(), [](auto &a, auto &b) {
//     if(a.first == b.first)
//     {
//         return a.second < b.second;
//     }
//     return a.first > b.first;
//    }); 
   ll idx = 0;
   ll sz = kandang.size();
   ll total = 0; 
   ll i = 0;
   while(i<k && idx < n)
   {
    if(kandang[i].second > 0)
    {
        kandang[i].second--;
        total+=bebek[idx]*kandang[i].first; 
        idx++;
    }
    else 
    {
        i++;
    }
    }
   cout << total << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}