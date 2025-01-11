// Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

// Note:

// Assume array A is 0-based indexing.
// Solve this problem using recursion.
// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print numbers in even indices in a reversed order separated by spaces.
#include<bits/stdc++.h>
using namespace std; 

void cetak(int arr[], int n)
{
    if(n<0)
    {
        return;
    }
    if(n%2==0)
    {
        cout << arr[n] << " ";
    }
    cetak(arr, n-1);
}

void solution()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
        cin >> arr[i];
   }
//    for(int i=n-1;i>=0;i--)
//    {
//         if(i%2==0)
//         {
//             cout << arr[i] << " ";
//         }
//    }
    cetak(arr, n-1);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
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