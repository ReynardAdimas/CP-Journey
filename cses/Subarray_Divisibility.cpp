#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n;
   vector<int> v(n); 
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   } 
   vector<int> pre(n+1); 
   pre[0] = 0; 
   for(int i=1;i<n;i++)
   {
    pre[i] = v[i]+pre[i-1];
   } 
   
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