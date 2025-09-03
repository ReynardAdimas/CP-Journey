#include<bits/stdc++.h>
using namespace std;

void solution()
{
   long long n; 
   cin >> n; 
   long long ans = floor((sqrt(1+(8*n))-1)/2); 
   cout << ans << '\n';
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