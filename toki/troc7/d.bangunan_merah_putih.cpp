#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n;
   cin >> n; 
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i];  

   if (n == 0) {
       cout << "0\n\n";
       return;
   }
   vector<int> v1;
   v1.push_back(v[0]);

   for(int i = 1; i < n; i++) {
       if (v[i] != v[i-1]) {
           v1.push_back(v[i]);
       }
   }
   int m = v1.size();
   if (m <= 2) {
       cout << v1.size() << "\n"; 
       for(auto x : v1) {
           cout << x << " ";
       }
       cout << "\n";
       return;
   }
   vector<int> ans;
   ans.push_back(v1[0]);
   for(int i = 1; i < m - 1; i++) {
       int left = v1[i-1]; 
       int mid = v1[i]; 
       int right = v1[i+1]; 
       bool hapus = (left < mid && mid < right) || (left > mid && mid > right);
       if (!hapus) {
           ans.push_back(mid);
       }
   }
   ans.push_back(v1[m - 1]);
   cout << ans.size() << "\n"; 
   for(auto x : ans) {
    cout << x << " ";
   }
   cout << "\n";
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