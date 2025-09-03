#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   vector<int> x(n), y(n); 
   for(int i=0;i<n;i++)
   {
    cin >> x[i] >> y[i];
   } 
   int dx = *max_element(x.begin(), x.end()) - *min_element(x.begin(), x.end());
   int dy = *max_element(y.begin(), y.end()) - *min_element(y.begin(), y.end()); 
   int ans = (max(dx,dy)+1)/2; 
   cout << ans << "\n"; 
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