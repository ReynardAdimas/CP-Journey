#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,m,x,y; 
   cin >> n >> m >> x >> y; 
    vector<int> a(n), b(m); 
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    } 
    int ans = n+m; 
    // bool horiz = (a[0] > 0) || (a[n-1]<y); 
    // bool vert = (b[0] > 0) || (b[m-1] < x);
    // if(horiz || vert) ans--; 
    cout << ans << endl;
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