// You are given two integers n and k. Find k-th smallest divisor of n, or report that it doesn't exist.

// Divisor of n is any such natural number, that n can be divided by it without remainder.

// Input
// The first line contains two integers n and k (1 ≤ n ≤ 1015, 1 ≤ k ≤ 109).

// Output
// If n has less than k divisors, output -1.

// Otherwise, output the k-th smallest divisor of n.
#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    long long n,k,d;
	set<long long> a;
	cin>>n>>k;
	for(d=1;d*d<=n;d++)if(n%d==0)a.insert({d, n/d});
	if(k<=a.size())cout<<*next(a.begin(),k-1);else cout<<-1;
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