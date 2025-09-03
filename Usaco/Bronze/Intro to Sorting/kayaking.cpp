#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n;
   int sz = 2*n;
   int arr[sz];
   for(int i=0;i<sz;i++) cin >> arr[i]; 
   sort(arr, arr+(sz)); 
   int ans = INT_MAX;
   for(int i=0;i<sz;i++)
   {
    for(int j=i+1;j<sz;j++)
    {
        vector<int> s;
        for(int k=0;k<sz;k++)
        {
            if(k!= i && k!= j)
            {
                s.push_back(arr[k]);
            }
        }
        int temp =0; 
        for(int k=0;k<sz-2;k+=2)
        {
            temp += s[k+1] - s[k];
        }
        ans = min(ans,temp);
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
