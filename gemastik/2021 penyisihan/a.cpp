#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,kupon; 
   cin >> n >> kupon; 
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i]; 
   sort(v.begin(), v.end()); 
   int low = 0; 
   int high = n-1; 
   while(low<=high)
   {
    int mid = (low+high)/2; 
    if(v[mid]==kupon)
    {
        cout << v[mid];
    }
    else if(v[mid] < kupon)
    {
        low = mid+1;
    }
    else 
    {
        high = mid-1;
    }
   } 

   int diff1 = INT_MAX; 
   if(low < n)
   {
    diff1 = abs(v[low]-kupon);
   }
   int diff2 = INT_MAX; 
   if(high >= 0)
   {
    diff2 = abs(v[high]-kupon);
   } 
   if(diff1 == diff2)
   {
    cout << v[high] << "\n";
    cout << v[low] << "\n";
   }
   else if(diff1 < diff2)
   {
    cout << v[low] << "\n";
   }
   else 
   {
    cout << v[high] << "\n";
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