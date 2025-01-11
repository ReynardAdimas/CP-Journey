#include<bits/stdc++.h>
using namespace std; 

// hcf = gcd
int gcd(int a, int b)
{
    int res = min(a,b);
    while(res > 1)
    {
        if(a % res == 0 && b % res == 0) break;
        res--;
    }
    return res;
}
int euc(int a, int b)
{
    if(a==0) return b; 
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return euc(a-b,b);
    if(a<b) return euc(a,b-a);
}

void solution()
{
   int a,b; 
   cin >> a >> b; 
   int fpb = euc(a,b); 
   long long kpk = 1LL* a*b/fpb; 
   cout << kpk << " " << fpb << endl;
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