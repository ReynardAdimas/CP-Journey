#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int a,b,c; 
   cin >> a >> b >> c;
   if((a==c) or (b==c) or (a==b)) cout << "Yes" << '\n'; 
   else cout << "No" << '\n';
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