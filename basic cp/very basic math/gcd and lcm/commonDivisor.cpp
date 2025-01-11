#include<bits/stdc++.h>
using namespace std; 
long long j,n,x,g,cnt;

void solution()
{
  cin>>n;
	for(j=0;j<n;j++) {
    cin>>x;
    g=__gcd(g,x);
  }
	for(j=1;j*j<g;j++) if(g%j==0) cnt+=2;
	if(j*j==g) cnt++;
	cout<<cnt;
   
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