#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,m,l,r; 
   int a,b;
   int curr = 0; 
   cin >> n >> m >> l >> r; 
   if(m-(curr-l)>0)
   {
    a=l;
    b = curr + (m-curr-l);
   }
   if(m-(curr-l)<0)
   {
    if(l >= m-(curr-l))
    {
        a = m-(curr-l);
        b = curr;
    }
    
   }
   else 
   {
    a=l;
    b=curr;
   }
   cout << a << " " << b << endl;
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