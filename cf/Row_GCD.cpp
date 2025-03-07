#include<bits/stdc++.h>
#define int unsigned long long int
using namespace std; 

int gcd(int a, int b)
{
    if(b==0) return a; 
    return gcd(b, a%b);
}


int hitunggcd(int arr[], int n)
{
    int ans = arr[0]; 
    for(int i=1;i<n;i++)
    {
        ans = gcd(arr[i], ans);
    }
    return ans;
}
 
// hitung gcd(b[i]+a[0], gcd array a)

void solution()
{
   int n, m; 
   cin >> n >> m; 
   int a[n], b[m]; 
   for(int i=0;i<n;i++) cin >> a[i]; 
   sort(a,a+n);
   for(int i=0;i<m;i++) cin >> b[i];
    int GCD = 0; 
    for(int i=1;i<n;i++)
    {
        GCD = gcd(GCD, a[i]-a[0]);
    }
    for(int i=0;i<m;i++)
    {
        cout << gcd(b[i]+a[0],GCD)<<" ";
    }
   cout << endl;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    t = 1;
    while(t--)
    {
        solution();
    }
    return 0;
}