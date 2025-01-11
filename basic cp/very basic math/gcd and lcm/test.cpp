#include<bits/stdc++.h>
using namespace std; 

// GCD = mencari pembagi terbesar antara 2 bilangan atau lebih 
// LCM = MEncari bilangan kelipatan terkecil antara 2 bilangan atau lebih

void solution()
{
   int a,b; 
   cin >> a >> b;
   int gcd = __gcd(a,b); 
   long long LCM = 1LL * a * b / gcd; 
   cout << LCM << " " << gcd << endl;
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