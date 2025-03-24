#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n; 
    cin >> n; 
    int ans = 0; 
    for(int i=0;i<n;i++)
    {
        int a; 
        cin >> a; 
        ans+=a;
    }
    cout << ans-(n-1) << endl;
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