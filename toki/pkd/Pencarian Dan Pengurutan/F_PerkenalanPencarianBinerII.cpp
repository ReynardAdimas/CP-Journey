#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n; 
   int arr[n]; 
   for(int i=0;i<n;i++) cin >> arr[i]; 
   int q; 
   cin >> q; 
   int target[q]; 
   for(int i=0;i<q;i++) cin >> target[i]; 
   int arr2[n];
   int awal = arr[0];
   arr2[0] = awal; 
   for(int i=1;i<n;i++)
   {
        arr2[i] = awal + arr[i]; 
        awal = arr2[i];
   } 
   for(int i=0;i<q;i++)
   {
        int left = 0; 
        int right = n-1; 
        int ans = -1; 
        while(left <= right)
        {
            int mid = left + (right - left) / 2; 
            if(arr2[mid] < target[i])
            {
                left = mid+1;
            }
            else 
            {
                ans = mid; 
                right = mid-1;
            }
        } 
        cout << ans+1 << endl;
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