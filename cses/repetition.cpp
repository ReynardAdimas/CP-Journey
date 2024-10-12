#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string s; 
	cin >> s; 	
	int sz = s.size();
	int ans = 1;
	int temp = 1;
	vector<int> v;
	char p = s[0];
	for(int i=1;i<sz;i++)
	{
		if(s[i-1]==s[i])
		{
			temp++;
		}
		else 
		{
			temp = 1;
		}
		ans = max(ans,temp);
	}
	cout << ans << endl;		
}
