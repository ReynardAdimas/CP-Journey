#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,m; 
   cin >> m >> n; 
   int a[n]; 
   for(int i=0;i<n;i++)
   {
    cin >> a[i]; 
   }
   cout << abs(a[n-1] - a[0]) << endl;
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