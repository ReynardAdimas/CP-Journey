#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int a,b,c,d; 
    int ans = 0;
    cin >> a >> b >> c >> d; 
    for(int i=a;i<=b;i++)
    {
        if(i%c!=0 && i%d!=0) ans++;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}