#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n; 
   vector<int> v;
   for(int i=0;i<n;i++)
   {
     int p; 
     cin >> p; 
     v.push_back(p);
   }
   sort(v.begin(), v.end()); 
   if(v[n-1]==1)
   {
    cout << "HARD" << endl;
   }
   else 
   {
    cout << "EASY" << endl;
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