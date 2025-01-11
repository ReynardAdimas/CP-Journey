#include<bits/stdc++.h>
using namespace std; 

long long euc(int a, int b)
{
    if(a==0) return b; 
    if(b==0) return a; 
    int k;
    for(k=0;((a|b)&1)==0;++k)
    {
        a >>= 1; 
        b >>= 1;
    }
    while((a&1) == 0)
        a >>= 1; 
    do
    {
        while((b&1) == 0)
            b >>= 1; 
        if(a>b)
            swap(a,b);
        b=(b-a);
    } while (b != 0);
    return a<<k;
}

void solution()
{
   long long a,b,fpb,kpk; 
   cin >> a >> b; 
   if(b%a==0)
   {
        if(a==1)
        {
            kpk = b*b;
        }
        else
        {
            fpb = euc(a,b);
            kpk = a*b/fpb;
            kpk = kpk * b/a;
        }
   } 
   else
   {
        fpb = euc(a,b);
        kpk = a*b/fpb;
   }
   cout << kpk << endl;
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