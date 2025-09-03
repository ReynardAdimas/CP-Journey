#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   ll n; 
   cin >> n; 
   ll sum = -3; 
   for(int i=3;i<=n;i++)
   {
    int t = i;
    if((int)sqrt(i) % 2 == 0)
    {
        t*=-1;
    }
    sum+=t;
   }
   cout << sum << endl;
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