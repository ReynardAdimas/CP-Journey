#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,q; 
   set<int> s; 
   cin >> n >> q; 
   string t; 
   cin >> t; 
   for(int i=0;i<n;i++)
   {
    if(t[i] == '1')
    {
        s.insert(i);
    }
   }
   int c,k;
   while(q--)
   {
    cin >> c >> k;
    if(c==0)
    {
        s.insert(k);
    }
    else if(c==1)
    {
         s.erase(k);
    }
    else if(c==2)
    {
        cout << (s.count(k) ? 1 : 0) << "\n";
    }
    else if(c==3)
    {
        auto it = s.upper_bound(k); 
        if(it == s.begin())
        {
            cout << -1 << "\n";
        }
        else 
        {
            --it; 
            cout << *it << "\n";
        }
    }
    else 
    {
        auto it = s.lower_bound(k); 
        if(it == s.end())
        {
            cout << -1 << "\n";
        }
        else 
        {
            cout << *it << "\n";
        }
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