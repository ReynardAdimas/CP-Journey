#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n; 
    cin >> n; 
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        char a; 
        cin >> a; 
        if(a=='#')
        {
            arr[i] = -1;
        } 
        if(a=='.')
        {
            arr[i] = 0;
        }
    } 
    int patok = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            patok += 1; 
            sum++;
        }
        else if(arr[i]==-1)
        {
            patok = 0;
        } 
        if(patok==3)
        {
            sum = 2;
            break;
        } 
    } 
    cout << sum << endl;
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