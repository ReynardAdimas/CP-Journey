// Dynamic Range sum Queries - CSES
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> dt; 
ll sz; 
ll build(vector<ll> &v, ll t, ll l, ll r) 
{
    if(l==r)
    {
        dt[t] = v[l]; 

    } 
    else 
    {
        ll mid = (l+r)/2; 
        dt[t] = build(v, 2*t,l,mid)+  build(v, 2*t+1, mid + 1, r);
    } 
    return dt[t];
} 

ll query(ll t, ll l, ll r, ll tl, ll tr) 
{
    if(tl > tr) return 0; 
    if(l >= tl && r <= tr)
    {
        return dt[t];
    } 
    ll mid = (l+r)/2; 
    return query(2*t, l, mid, tl, min(mid, tr)) +  query(2*t+1, mid+1, r, max(mid+1, tl), tr);
} 

ll query(ll tl, ll tr)
{
    return query(1, 0, sz-1,tl,tr);
}  

ll update(ll t, ll l, ll r, ll i, ll v) 
{
    if(i<l || i > r)
    {
        return dt[t];
    } 
    if(l==r)
    {
        dt[t] = v; 
        return dt[t]; 
    } 
    ll mid = (l+r)/2; 
    dt[t] = update(2*t,l,mid,i,v) +  update(2*t+1, mid+1, r,i,v); 
    return dt[t];
} 

void update(ll i, ll v)
{
    update(1,0,sz-1, i,v);
}



void solution()
{
   ll n,q; 
   cin >> n >> q; 
   vector<ll> v(n); 
   sz = n;
   for(ll i=0;i<n;i++)
   {
    cin >> v[i];
   }
   dt.assign(4*sz, 0); 
   build(v, 1, 0, sz-1); 
   while(q--)
   {
    ll t; 
    cin >> t;
    if(t==1)
    {
        ll a,b; 
        cin >> a >> b;
        update(a-1,b);
    }
    else 
    {
        ll a,b; 
        cin >> a >> b;
        cout << query(a-1,b-1) << "\n";
    }
   } 
   
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    ll t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}