#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int a;
    cin >> a; 
    char arr[a][4];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=a-1;i>=0;i--)
    {
        for(int j=3;j>=0;j--)
        {
            if(arr[i][j]=='#')
            {
                cout << j+1 << " ";
            }
        }
    }
    cout << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    //t = 0;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}