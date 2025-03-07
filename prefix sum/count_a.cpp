#include<bits/stdc++.h>
using namespace std; 

int psum(vector<int>& a, int l, int r)
{
    int sum = 0;
    for(int i=l;i<r;i++)
    {
        sum += a[i];
    }
    return sum;
}

void solution()
{
   string s; 
   cin >> s; 
   int n = s.length();
   vector<int> a(n+1,0); 
   for(int i=0;i<n;i++)
   {
    if(s[i]=='a')
    {
        a[i]=1;
    }
   } 
   int q; 
   cin >> q;
   for(int i=0;i<q;i++)
   {
    int l,r; 
    cin >> l >> r; 
    int ans = psum(a, l-1, r); 
    cout << ans << endl;
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