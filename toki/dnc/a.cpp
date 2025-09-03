#include<bits/stdc++.h>
using namespace std;

long long exp(int a, int b)
{
    long long res = 1; 
    if(b==0) return 1; 
    if(b>0)
    {
        if(b%2==0)
        {
            long long p = exp(a,b/2);
            return p*p;
        }
        else 
        {
            long long p = exp(a,b-1);
            return a*p;
        }
    }
}

void solution()
{
   int a,b; 
   cin >> a >> b;   
   long long hasil = exp(a,b) % 1000000;
   if(hasil > 0) 
   {
    cout << hasil << endl;
   }
   else 
   {
    cout << "000000" << endl;
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