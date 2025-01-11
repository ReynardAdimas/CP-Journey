// Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
// $$ 3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$$
// Your task is to simulate the execution of the algorithm for a given value of n.

#include<bits/stdc++.h>
using namespace std; 
 
int main()
{
ios::sync_with_stdio(0);
cin.tie(0); 
 
	long long  n; 
	cin >> n; 
	cout << n ;
	
	while(n>1)
	{
		if(n%2==0)
		{
			n/=2;	
		}	
		else
		{
			n=n*3+1;
		}
		cout << " " << n;
	} 
}