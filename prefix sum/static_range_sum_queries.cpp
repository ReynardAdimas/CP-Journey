#include<bits/stdc++.h>
using namespace std; 

vector<long long> psum(const vector<long long>& v)
{
    int n = v.size();
    vector<long long> sum(n+1, 0);
    for(int i=0;i<n;i++)
    {
        sum[i+1] = sum[i] + v[i];
    }
    return sum;
}

void solution()
{
   int n,q; 
   cin >> n >> q; 
   vector<long long> v(n); 
   for(long long &x : v) cin >> x;
   vector<long long> a = psum(v);
   for(int i=0;i<q;i++)
   {
    int l,r; 
    cin >> l >> r;
    cout << a[r] - a[l-1] << endl;
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