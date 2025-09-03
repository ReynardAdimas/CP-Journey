#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int v,t; 
   while(cin >> v >> t)
   {
    cout << 2*v*t << endl;
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