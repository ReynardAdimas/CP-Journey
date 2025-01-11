// Given a number N
// . Print "I love Recursion" N
//  times.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N
//  (1≤N≤100)
//  .

// Output
// Print "I love Recursion" N
//  times. 
#include<bits/stdc++.h>
using namespace std; 

void cetak(int n)
{
    if(n<=0)
    {
        return;
    }
    cout << "I Love Recursion" << endl;
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