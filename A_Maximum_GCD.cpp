#include<bits/stdc++.h>
using namespace std; 

int gcd(int a, int b)
{
    
}

void solution()
{
   int n; 
   cin >> n; 
   int maks = INT_MIN;
   for(int i=1;i<=n;i++)
   {
    for(int j=i+1;j<=n;j++)
    {
        int temp = __gcd(i,j); 
        maks = max(temp, maks);
    }
   }
   cout << maks << endl;
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