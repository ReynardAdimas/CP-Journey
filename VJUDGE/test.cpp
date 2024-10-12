#include<bits/stdc++.h>
using namespace std; 
// B
int main()
{
    int n; 
    cin >> n; 
    char a[n][n]; 
    char b[n][n]; 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> b[i][j];
        }
    }
    int ans1, ans2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j]) 
            {
                ans1 = i; 
                ans2 = j;
            }
        }
    } 
    cout << ans1+1 << " " << ans2+1 << endl;
}