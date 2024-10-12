#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t; 
    cin >> t; 
    while(t--)
    {
        vector<string>s; 
        vector<int> g;
        vector<int> c;
        int n; 
        cin >> n;
        for(int i=0;i<n;i++)
        {
            string str; 
            int p,q;
            cin >> str >> p >> q;
            s.push_back(str); 
            g.push_back(p); 
            c.push_back(c);
        } 
        int sz = g.size();
        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<sz;j++)
            {
                if(g[j]>g[j+1])
                {
                    swap(g[j],g[j+1]);
                    swap(s[j],s[j+1]); 
                    swap(c[j],c[j+1]);
                }
            }
        } 
        
    }
}