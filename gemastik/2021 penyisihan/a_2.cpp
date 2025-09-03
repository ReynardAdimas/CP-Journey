#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,kupon; 
   cin >> n >> kupon; 
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i]; 
   sort(v.begin(), v.end()); 
   int low = 0; 
   int high = n-1; 
   
   auto it = lower_bound(v.begin(), v.end(), kupon); 
   int ans1 = INT_MAX; 
   int ans2 = INT_MAX; 
   
   if(it != v.end()) ans1 = *it; 
   if(it != v.begin()) ans2 = *(prev(it)); // sebelum lb


    int diff1 = (ans1 == INT_MAX ? INT_MAX : abs(ans1-kupon)); 
    int diff2 = (ans2 == INT_MAX ? INT_MAX : abs(ans2-kupon));

   if(diff1 == diff2)
   {
    cout << ans2 << "\n";
    cout << ans1 << "\n";
   }
   else if(diff1 < diff2)
   {
    cout << ans1 << "\n";
   }
   else 
   {
    cout << ans2 << "\n";
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