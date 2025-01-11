// You will be given an array of N integers. Write a recursive function to calculate its summation.

// Input
// Input starts with an integer T (T ≤ 100), the number of test cases.

// Each of the next T lines will start with an integer N (1 <= N <= 100), number of integers followed by N space separated. Each of these N integers will be between -1000 and 1000 (inclusive).

// Output
// For each test case, output one line in the format “Case x: a” (quotes for clarity), where x is the case number and a is the summation of the integers.
#include<bits/stdc++.h>
using namespace std; 
int hitung(int arr[], int n)
{
    if(n<0)
    {
        return 0;
    }
    
    return arr[n] + hitung(arr, n-1);
}

int main()
{
    int t; 
    cin >> t; 
    for(int i=1;i<=t;i++)
    {
        int n; 
        cin >> n; 
        int arr[n];
        for(int j=0;j<n;j++)
        {
            cin >> arr[j];
        }
        cout << "Case " << i << " : " << hitung(arr, n-1) << endl;
    }
}