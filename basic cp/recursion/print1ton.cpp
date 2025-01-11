// Given a number N. Print numbers from 1 to N in separate lines.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print N lines according to the required above. 
#include<bits/stdc++.h>
using namespace std; 
int a = 0;
 
void cetak(int n, int a)
{
    if(n<=0) return; 
    cout << a+1 << endl;
    cetak(n-1, a+1);
}
 
void solution()
{
    int n; 
    cin >> n;
    cetak(n,a);
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