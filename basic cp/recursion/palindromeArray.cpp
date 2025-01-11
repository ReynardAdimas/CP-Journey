// Given a number N and an array A of N numbers. Determine if it's palindrome or not.

// Note:

// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

// NOTE: Solve it using recursion.

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (1 ≤ Ai ≤ 109).

// Output
// Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).
#include<bits/stdc++.h>
using namespace std; 

bool cek(int arr[], int l, int r)
{
    if(l >= r) return true; 
    if(arr[l] != arr[r]) return false;
    return cek(arr, l+1, r-1);
}

void solution()
{
   int n; 
   cin >> n; 
   int arr[n]; 
   for(int i=0;i<n;i++) cin >> arr[i]; 
   if(cek(arr,0,n-1)) cout << "YES" << endl;
   else cout << "NO" << endl;
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