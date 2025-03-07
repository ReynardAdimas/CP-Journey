#include<bits/stdc++.h>
#define ll long long
using namespace std; 

void solution()
{
   int n;
   cin >> n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin >> v[i]; 
    sort(v.begin(), v.end()); 
    ll sum = 0; 
    for(int i=0;i<n-1;i++)
    {
        sum+=v[i];
    }
    if(sum<=v.back())
    {
        cout << 2*v.back() << endl;
    }
    else 
    {
        cout << accumulate(v.begin(), v.end(), 0LL) << endl;
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