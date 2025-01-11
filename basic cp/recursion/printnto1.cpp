// Given a number N. Print all numbers from N to 1 separated by a single space.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print from N to 1 separated by a single space.
#include<bits/stdc++.h>
using namespace std; 
 
 
void cetak(int n)
{
    if(n==1)
    {
        cout << 1; 
        return;
    } 
    cout << n << " ";
    cetak(n-1);
}
 
void solution()
{
    int n; 
    cin >> n;
    cetak(n);
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