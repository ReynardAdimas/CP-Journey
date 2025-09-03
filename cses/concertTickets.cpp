#include<bits/stdc++.h>
using namespace std;

int n,m,h,t; 
multiset<int> tiket;
void solution()
{
  cin >> n >> m; 
  for(int i=0;i<n;i++)
  {
    cin >> h; 
    tiket.insert(h);
  }
  for(int i=0;i<m;i++)
  {
    cin >> t; 
    auto it = tiket.upper_bound(t);
    if(it == tiket.begin())
    {
        cout << -1 << endl;
    } 
    else 
    {
        cout << *(--it) << endl; 
        tiket.erase(it);
    }
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