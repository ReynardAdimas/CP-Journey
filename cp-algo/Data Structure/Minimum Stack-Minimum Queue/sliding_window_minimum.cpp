#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   ll n,k,x,a,b,c,res=0;
   cin >> n >> k;
   cin >> x >> a >> b >> c; 
   vector<ll> v(n);
   v[0] = x; 
   for(int i=1;i<n;i++)
   {
    v[i] = (v[i-1]*a + b)%c;
   } 
   deque<int> dq;  

   for(int i = 0; i < n; i++)
    {
        if(!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        while(!dq.empty() && v[i] <= v[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i); 
        if(i >= k - 1) {
            res ^= v[dq.front()];
        }
    }
    cout << res << "\n";
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