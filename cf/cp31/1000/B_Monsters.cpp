#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n,k;
   cin >> n >> k;
   vector<pair<int, int>> health_point(n); 
   for(int i=0;i<n;i++)
   {
    int x; 
    cin >> x; 
    health_point[i] = {x,i+1};
   }

   for(int i=0;i<n;i++)
   {
    health_point[i].first = health_point[i].first % k; 
    if(health_point[i].first == 0) 
    {
        health_point[i].first = k;
    }
   } 

   sort(health_point.begin(), health_point.end(), [&](pair<ll,ll> a, pair<ll,ll> b) {
    if(a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
   }); 

   for(auto it : health_point)
   {
    cout << it.second << " ";
   }
   cout << "\n";
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