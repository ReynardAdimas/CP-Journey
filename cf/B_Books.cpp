#include<bits/stdc++.h>
using namespace std; 


void solution()
{
    int n,t,i=0; 
    cin >> n >> t; 
    int a[n]; 
    for(int i=0;i<n;i++) cin >> a[i]; 
    int ans = 0;
    int sum = 0; 
    for(int j=0;j<n;++j)
    {
        while(sum + a[i] <= t && i<n)
        {
            sum += a[i];
            ++i;        
        } 
        ans = max(ans, i-j); 
        sum -= a[j];
    }
    cout << ans << endl;
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