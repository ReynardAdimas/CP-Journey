#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int p,q,r,s,t; 
   int a1,b1,c1,d1,e1;
   cin >> p >> q >> r >> s >> t; 
   for(int a=1;a<=8;a++)
   {
    for(int b=1;b<=8;b++)
    {
        for(int c=1;c<=8;c++)
        {
            for(int d=1;d<=8;d++)
            {
                for(int e=1;e<=8;e++)
                {
                    if(a*b==p && b*c==q && c*d==r && d*e==s && e*a==t)
                    {
                        a1 = a; 
                        b1 = b; 
                        c1 = c; 
                        d1 = d; 
                        e1 = e;
                    }
                }
            }
        }
    }
   } 
   cout << a1 << " " << b1 << " " << c1 << " " << d1 << " " << e1 << endl;
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