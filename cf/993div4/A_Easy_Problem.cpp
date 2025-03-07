#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n; 
    cin >> n; 
    int arr[n]; 
    int counter = 0;
    for(int i=0;i<n;i++) arr[i] = i+1; 
    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]+arr[j]==n)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
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