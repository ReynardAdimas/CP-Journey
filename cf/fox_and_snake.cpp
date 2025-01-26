#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,m; 
   cin >> n >> m;
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
    {
        if(i%2!=0)
        {
            cout << "#";
        }
        else 
        {
            if((i/2)%2!=0)
            {
                if(j==m)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            if((i/2)%2==0)
            {
                if(j==1)
                {
                    cout << "#";
                }
                else 
                {
                    cout << ".";
                }
            }
        }
    }
    cout << endl;
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