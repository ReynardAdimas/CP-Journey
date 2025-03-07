#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int a,b,c; 
   cin >> a >> b >> c; 
   if(a*b==c)
   {
    cout << "Yes" << endl;
   }
   else if(a*c==b)
   {
    cout << "Yes" << endl;
   }
   else if(b*c==a)
   {
    cout << "Yes" << endl;
   }
   else 
   {
    cout << "No" << endl;
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