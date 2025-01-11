// Given a number N. Print the value of the Nth Fibonacci number.


// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 30).

// Output
// Print the value of the Nth Fibonacci number. 
#include<bits/stdc++.h>
using namespace std; 

int fact(int n)
{
    if(n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else 
    {
        return fact(n-1)+fact(n-2);
    }
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