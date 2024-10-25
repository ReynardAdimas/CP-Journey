#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int light[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            light[i][j]=1;
        }
    } 
    int order[3][3]; 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> order[i][j];
        }
    } 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            while(order[i][j]>0)
            {
                if(light[i][j]==1)
                {
                    light[i][j]=0; 
                    light[i+1][j]=0; 
                    light[i][j+1]=0; 
                    light[i-1][j]=0; 
                    light[i][j-1]=0;
                }
                else 
                {
                    light[i][j]=1; 
                    light[i+1][j]=1; 
                    light[i][j+1]=1; 
                    light[i-1][j]=1; 
                    light[i][j-1]=1;
                }
                order[i][j]--;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << light[i][j];
        }
        cout << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}