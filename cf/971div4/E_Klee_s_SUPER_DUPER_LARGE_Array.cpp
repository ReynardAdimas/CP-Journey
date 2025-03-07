#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,k;
   cin >> n >> k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    arr[i] = k+i;
   }
   long long ans=0;
   int mid = n/2;
   for(int i=0;i<mid;i++)
   {
    ans+=arr[i];
   }
   for(int i=mid;i<n;i++)
   {
    ans-=arr[i];
   }
   cout << abs(ans) << endl;
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