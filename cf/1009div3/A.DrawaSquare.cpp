#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int l,r,d,u; 
   cin >> l >> r >> d >> u;
   if(l==r && r==d && d==u) cout << "Yes" << endl;
   else cout << "No" << endl;
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