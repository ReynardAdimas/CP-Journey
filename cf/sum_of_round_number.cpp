#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int x; 
   vector<int> ans;
   cin >> x; 
   int mod = 10000; 
   while(x > 0)
   {
        if(x%mod==x)
        {
            mod/=10;
        }
        else 
        {
            int d = x%mod; 
            ans.push_back(x-d); 
            x = d;
        }
   } 
   cout << ans.size() << endl;
   for(auto a:ans)
   {
        cout << a << " ";
   }
   cout << endl;
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