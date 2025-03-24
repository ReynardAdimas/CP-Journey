#include<bits/stdc++.h>
#define ll long long
using namespace std; 

const int mod = 1e9+7;
int pw(int a, ll b, int m)
{
    if(b==0) return 1; 
    if(b%2==0)
    {
        int p = pw(a,b/2,m);
        return 1LL * p * p % m;
    }
    else 
    {
        int p = pw(a,(b-1)/2,m); 
        return 1LL * p * p % m * a%m;
    }
}
void solution()
{
   int a,b,c; 
   cin >> a >> b >> c; 
   ll first = pw(b,c,mod-1);
   cout << pw(a,first,mod) << endl;
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