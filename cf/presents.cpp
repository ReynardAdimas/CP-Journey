#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n;
   int arr[n];
   vector<int> q; 
   for(int i=0;i<n;i++) cin >> arr[i]; 
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
        if(i+1 == arr[j])
        {
            q.push_back(j+1);
        }
     }
   }
   for(auto a:q)
   {
    cout << a << " ";
   }
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