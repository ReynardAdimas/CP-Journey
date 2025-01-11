// Given two numbers S
//  and E
//  where S
//  denotes a start point and E
//  denotes an end point. Determine how many possible ways to reach point E
//  if you can move either 1 step, 2 steps or 3 steps at a time.

// Note: Solve this problem using recursion.

// Input
// Only one line contains two numbers S
//  and E
//  (1≤S≤E≤15)
// .

// Output
// Print the answer required above. 
// STAIRCASE PROBLEM
#include<bits/stdc++.h>
using namespace std; 

int ways(int a, int b)
{
    if(b==a) return 1; 
    if(b<a) return 0; 
    return ways(a,b-1) + ways(a,b-2) + ways(a,b-3);
}
void solution()
{
    int a,b; 
    cin >> a >> b; 
    cout << ways(a,b) << endl;
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