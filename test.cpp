#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n; 
   vector<int> v; 
   for(int i=0;i<n;i++)
   {
     int x; 
     cin >> x; 
     v.push_back(x);
   }
   int maks = *max_element(v.begin(), v.end()); 
   int minim = *min_element(v.begin(), v.end());
   int posmax, posmin; 
   for(int i=1;i<=n;i++)
   {
     if(v[i]==minim)
     {
        posmin = i;
     }
   }
   for(int i=n-1;i>=1;i--)
   {
    if(v[i]==maks)
    {
        posmax=i;
    }
   } 
   int ans = 0;
   if(posmax < posmin)
   {
    ans+=posmax-1; 
    ans+=abs(posmin-n);
   }
   else 
   {
        ans+=posmax-1; 
     ans+=abs(posmin-n);
     ans-=1;
   }
   cout << ans << endl;
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