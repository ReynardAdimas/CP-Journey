#include<bits/stdc++.h>
using namespace std; 

int combination(int n, int r)
{
    if(r > n) return 0; 
    vector<vector<int>> c(n+1, vector<int>(r+1, 0)); 
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            if(j==0 || j==i)
            {
                c[i][j] = 1;
            }
            else 
            {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
            }
        }
    } 
    return c[n][r];
}

void solution()
{
   int n; 
   cin >> n; 
   int x[n];
   int y[n]; 
   for(int i=0;i<n;i++)
   {
     cin >> x[i] >> y[i];
   }
   int hasil = combination(n, 3); 
   cout << hasil << endl;
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