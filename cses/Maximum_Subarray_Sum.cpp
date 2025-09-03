#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   int arr[n];
   for(int i=0;i<n;i++) cin >> arr[i]; 

   long long ans = LONG_LONG_MIN;
   long long sum = 0;
   for(int i=0;i<n;i++)
   {
    sum+=arr[i]; 
    if(sum > ans)
    {
        ans = sum;
    }   
    if(sum < 0)
    {
        sum = 0;
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