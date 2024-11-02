#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n,ans=1; 
    cin >> n; 
    const int mod = 1e9+7; 
    for(int i=0;i<n;i++)
    {
        ans = (((ans%mod)*2)%mod);
    }
    cout << ans << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
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