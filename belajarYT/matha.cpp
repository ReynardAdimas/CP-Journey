#include<bits/stdc++.h>
using namespace std; 

int main()
{
   long long n; 
   cin >> n;    
   long long x,y; 
   for(long long i=1;i*i<=n;i++)
   {
        if(n%i==0)
        {
            x=i; 
            y = n/i;
        }
   }
   cout << x+y-2 << endl;
}