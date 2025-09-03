#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   long long a,b,c; 
   cin >> a >> b >> c; 
   long long q; 
   cin >> q; 
   while(q--)
   {
    long long t; 
    cin >> t; 
    if(t%a==0 && t%b==0 && t%c==0)
    {
        cout << "YA" << endl;
    }
    else 
    {
        cout << "TIDAK" << endl;
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
    while(t--)
    {
        solution();
    }
    return 0;
}