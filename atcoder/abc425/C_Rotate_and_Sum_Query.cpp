#include<bits/stdc++.h>
# define ll long long
using namespace std;

int n;
vector<ll> bit;

void update(int idx, ll delta)
{
    idx++; 
    for(; idx <= n; idx += idx & -idx)
    {
        bit[idx] += delta;
    }
}

ll query(int idx)
{
    idx++; 
    ll sum = 0;
    for(; idx > 0;idx -= idx & -idx)
    {
        sum += bit[idx];
    }
    return sum;
} 

ll renge(int l, int r)
{
    if(l>r) return 0; 
    if(l==0) return query(r); 
    return query(r) - query(l-1);
}
void solution()
{
   int q;
   cin >> n >> q;
   bit.resize(n+1);
   for(int i=0;i<n;i++)
   {
    ll v; 
    cin >> v; 
    update(i, v);
   } 
   
   ll shift = 0;
   for(int i=0;i<q;i++)
   {
    int t; 
    cin >>t; 

    if(t==1)
    {
        int c; 
        cin >> c; 
        shift = (shift+c)%n;
    }
    else 
    {
        int l,r; 
        cin >> l >> r; 
        int lidx = l-1;
        int ridx = r-1; 
        int str = (lidx + shift) % n;
        int end = (ridx + shift) % n; 

        ll total = 0; 
        if(str <= end)
        {
            total = renge(str, end);
        }
        else 
        {
            ll sum1 = renge(str, n-1); 
            ll sum2 = renge(0, end); 
            total = sum1+sum2;
        }
        cout << total << "\n";
    }
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