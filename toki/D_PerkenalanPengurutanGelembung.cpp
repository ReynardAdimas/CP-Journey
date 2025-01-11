#include<bits/stdc++.h>
using namespace std; 
int jumlah = 0;
void bubble(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]); 
                jumlah++;
            }
        }
    }
}

void solution()
{
   int n;
   cin >> n; 
   int arr[n]; 
   for(int i=0;i<n;i++) cin >> arr[i]; 
   bubble(arr, n); 
   cout << jumlah << endl;
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