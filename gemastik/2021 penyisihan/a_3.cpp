#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,kupon; 
   cin >> n >> kupon; 
   vector<int> v(n);
   int diff = INT_MAX; 
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
    if(abs(v[i] - kupon) < diff)
    {
        diff = abs(v[i] - kupon);
    }
   } 

   vector<int> ans; 
   for(int i:v)
   {
    if(abs(i-kupon) == diff)
    {
        ans.push_back(i);
    }
   }
   sort(ans.begin(), ans.end()); 
   for(int i : ans)
   {
    cout << setfill('0') << setw(5) << i << endl;
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