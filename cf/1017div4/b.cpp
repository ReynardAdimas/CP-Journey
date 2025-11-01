#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,m,l,r; 
   int a,b;
   int curr = 0; 
   cin >> n >> m >> l >> r; 
   int l1 = max(l, -m); 
   int r1 = l1+m; 
   cout << l1 << " " << r1 << '\n';
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