// Given a number N
// . Initially you have a value equal 1 and you can perform one of the following operation any number of times:

// Multiply your current value by 10.
// Multiply your current value by 20.
// Determine if your value can reach N
//  or not.

// Note: Solve this problem using recursion.

// Input
// First line contains a number T
//  (1≤T≤100)
//  number of test cases.

// Next T
//  lines will contain a number N
//  (1≤N≤1012)
// .

// Output
// For each test case print "YES" if your value can reach exactly N
//  otherwise, print "NO".

#include<bits/stdc++.h>
using namespace std; 

bool cek(long long a, long long b) 
{
    if(a==b) return true; 
    else if(a>b) return false; 
    else
    {
        return cek(a*10, b) || cek(a*20,b);
    }
}

void solution()
{
    long long n; 
    cin >> n; 
    if(cek(1,n)) cout << "YES" << endl;
    else cout << "NO" << endl;
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