#include<bits/stdc++.h>
using namespace std; 

void solution()
{
  long long l,r; 
  cin >> l >> r;
  if(2LL*l<=r)
  {
    cout << l << " " << 2LL*l << endl;
  }
  else 
  {
    cout << -1 << " " << -1 << endl;
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