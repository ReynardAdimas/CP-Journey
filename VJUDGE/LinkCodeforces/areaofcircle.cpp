#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    const double phi = 3.141592653; 
    double r; 
    cin >> r;
    double ans = phi*r*r;
    cout << fixed << setprecision(9) << ans << endl; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}