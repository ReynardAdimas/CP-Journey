#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,x; 
   cin >> n >> x;
   int pre = 0; 
   int ans = INT_MIN;
   for(int i=0;i<n;i++)
   {
    int a; 
    cin >> a; 
    ans = max(ans, a-pre); 
    pre = a;
   } 
   ans = max(ans, 2*(x-pre));
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