#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n,k;
    int arr[100005];
    int maks = 0;
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    } 
    int result;
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            int a = arr[i]; 
            a++; 
            arr[i] = a; 
            int b = arr[j]; 
            b++; 
            arr[j] = b; 
            result = 0;
            for(int l=0;l<n;i++)
            {
                int temp = arr[l]*arr[l+1];
                result += temp;
            }
        }
    }    
    
    cout << result << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}