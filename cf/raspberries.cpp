#include<bits/stdc++.h>
using namespace std;


void solution()
{
   int n, k; 
   cin >> n >> k; 
   vector<int> v(n);
   int evenCnt = 0; 
   for(int i=0;i<n;i++)
   {
    cin >> v[i]; 
   } 
   int ans=INT_MAX; 
   for(int i=0;i<n;i++)
   {
    if(v[i]%2==0)
    {
        evenCnt++;
    }
    if(v[i]%k==0)
    {
        ans=0;
    }
    ans = min(ans,(k-v[i]%k));
   }  
   if(k==4)
   {
    if(evenCnt>=2)
    {
        ans = min(ans,0);
    }
    else if(evenCnt==1)
    {
        ans = min(ans,1);
    }
    else if(evenCnt==0)
    {
        ans = min(ans,2);
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
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}