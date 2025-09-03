#include<bits/stdc++.h>
#define ll long
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   for(int i=0;i<n;i++)
   {
    int m; 
    cin >> m; 
    if(m==0)
    {
        cout << 0 << " " << 0 << "\n";
        continue;
    } 
    int langkah = 1; 
    int x=0;
    int y=0;
    int arah=0; 
    int step = 0;
    for(int j=1;j<=m;j++)
    {
        if(arah==0) x++; 
        else if(arah==1) y++; 
        else if(arah==2)x--; 
        else y--; 
        step++; 
        if(step==langkah)
        {
            step=0; 
            arah = (arah+1)%4; 
            langkah++;
        }
    } 
    cout << x << " " << y << "\n";
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