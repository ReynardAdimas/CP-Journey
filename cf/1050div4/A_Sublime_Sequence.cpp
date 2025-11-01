#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int x,n; 
   cin >> x >>  n; 
   int sum =0;
   if(n%2==0) sum=0; 
   else sum = x;
   cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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