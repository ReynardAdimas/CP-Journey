#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int a,b,c,d; 
    cin >> a >> b >> c >> d;
    int ans = a*b*c*d; 
    cout << ans%100 << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}