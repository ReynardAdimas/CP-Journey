#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,k; 
   cin >> n >> k; 
   vector<int> a(n);
   for(int i=0;i<n;i++) cin >> a[i]; 
   vector<int> b(k);
   for(int i=0;i<k;i++) cin >> b[i]; 
   vector<int> patok(n);
   patok[0] = a[0];
   for(int i=1;i<n;i++)
   {
        patok[i] = patok[i-1] + a[i];
   }  
   for(int i=0;i<k;i++)
   {
    int p = upper_bound(patok.begin(), patok.end(), b[i]) - patok.begin();
    cout << p << endl;
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