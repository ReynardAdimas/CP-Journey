#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int m; 
   cin >> m; 
   int bebek[m];
   for(int i=0;i<m;i++)
   {
    cin >> bebek[i];
   }
   int n;
   cin >> n; 
   // target grup n 
   // batas target n-1 
   sort(bebek, bebek+m);
   // 26, 24, 22, 21, 26, 500, 211, 28 
   // 21, 22, 24, 26, 26, 28, 211, 500 
   
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