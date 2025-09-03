#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   long long n,m; 
   cin >> n >> m; 
   long long k = n/m; 
   long long r = n%m;
   long long minimTeman = (m-r)*(k*(k-1)/2)+r*((k+1)*k/2); 
   long long maksTeman = ((n-m+1)*(n-m))/2;
   cout << minimTeman << " " << maksTeman << endl;
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