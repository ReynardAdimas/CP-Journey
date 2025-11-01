#include<bits/stdc++.h> 
using namespace std; 

int main()
{
	ios::sync_with_stdio(0); 
	cout.tie(0); 
	int n; 
	cin >> n; 
	int d[n]; 
	for(int i=0;i<n;i++)
	{
		cin >> d[i];
	}
	int x,cek; 
	cin >> x; 
	for(int i=0;i<n;i++)
	{
		if(d[i]==x)
		{
			cek=i;
		}
	}
	cout << cek+1 << endl;
}