#include<bits/stdc++.h>
using namespace std;

int ans = INT_MAX;
vector<int> v;
void solution()
{
   int q; 
   cin >> q; 
   if(q==1) 
   {
    int x; 
    cin >> x; 
    v.push_back(x);
   }
   else 
   {
    sort(v.begin(), v.end()); 
    cout << v[0] << '\n'; 
    v.erase(find(v.begin(), v.end(), v[0]));
   }
   
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