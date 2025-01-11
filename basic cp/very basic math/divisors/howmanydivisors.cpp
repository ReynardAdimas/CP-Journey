// How Many Divisors?
// Write a program which reads three integers a, b and c, and prints the number of divisors of c between a and b.

// Input
// Three integers a, b and c are given in a line separated by a single space.

// Output
// Print the number of divisors in a line.

// Constraints
// 1 ≤ a, b, c ≤ 10000
// a ≤ b
// Sample Input 1
// 5 14 80
// Sample Output 1
// 3

#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int ans = 0;
   int a, b, c; 
   cin >> a >> b >> c; 
   for(int i=a;i<=b;i++)
   {
        if(c%i==0)
        {
            ans++;
        }
   }
   cout << ans << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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