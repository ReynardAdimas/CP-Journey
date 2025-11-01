#include<bits/stdc++.h>
using namespace std;

void solution()
{
   long long n; 
   cin >> n; 
   long long a[n]; 
   for(long long i=0;i<n;i++) cin >> a[i]; 
   sort(a,a+n);
   long long idx;
    if(n==1)
    {
        cout << 0 << endl; 
        return;
    }
    else 
    {
        idx=n/2;
    }
//    cout << idx << endl;
   long long median = a[idx];
   long long total=0; 
//    cout << median << endl;
   for(long long i=0;i<n;i++)
   {
    if(i==idx) continue; 
    else 
    {
        total += abs(median-a[i]);
    }
   }
   cout << total << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    long long t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}