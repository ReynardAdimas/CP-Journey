// Given a number N. Print factorial of N.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 20).

// Output
// Print the factorial of the number N.
#include<bits/stdc++.h>
using namespace std; 
 
 
long long fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else return n*fact(n-1);
}
void solution()
{
    int n; 
    cin >> n;
    cout << fact(n) << endl;
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