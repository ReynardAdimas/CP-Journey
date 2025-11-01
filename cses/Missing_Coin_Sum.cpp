#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solution()
{
   int n; 
   cin >> n; 
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i]; 
   sort(v.begin(), v.end()); 
   ll sum = 1; 
   for(int i=0;i<n;i++)
   {
    if(v[i] > sum) break; 
    sum+=v[i];
   }
   cout << sum << "\n";
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