#include<bits/stdc++.h>
using namespace std; 

void generateSubarrays(int arr[], int subarray[], int n, int index, int subIndex) {
    if (subIndex > 0) {
        sort(subarray, subarray + n, greater<int>()); 
        cout << subarray[0] << " ";
    }
    for (int i = index; i < n; i++) {
        subarray[subIndex] = arr[i];
        generateSubarrays(arr, subarray, n, i + 1, subIndex + 1);
    }
}

void solution()
{
    int n;
    cin >> n; 
    int arr[n];
    int subarray[n];
    for(int i=0;i<n;i++) cin >> arr[i]; 
    generateSubarrays(arr,subarray,n,0,0);
    cout << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
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