// Dynamic Range Minimum Queries - CSES
#include<bits/stdc++.h>
using namespace std;

vector<int> dt; 
int sz; 
int build(vector<int> &v, int t, int l, int r) 
{
    if(l==r)
    {
        dt[t] = v[l]; 

    } 
    else 
    {
        int mid = (l+r)/2; 
        dt[t] = min(build(v, 2*t,l,mid),  build(v, 2*t+1, mid + 1, r));
    } 
    return dt[t];
} 

int query(int t, int l, int r, int tl, int tr) 
{
    if(tl > tr) return INT_MAX; 
    if(l >= tl && r <= tr)
    {
        return dt[t];
    } 
    int mid = (l+r)/2; 
    return min(query(2*t, l, mid, tl, min(mid, tr)), query(2*t+1, mid+1, r, max(mid+1, tl), tr));
} 

int query(int tl, int tr)
{
    return query(1, 0, sz-1,tl,tr);
}  

int update(int t, int l, int r, int i, int v) 
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
    int mid = (l+r)/2; 
    dt[t] = min(update(2*t,l,mid,i,v), update(2*t+1, mid+1, r,i,v)); 
    return dt[t];
} 

void update(int i, int v)
{
    update(1,0,sz-1, i,v);
}



void solution()
{
   int n,q; 
   cin >> n >> q; 
   vector<int> v(n); 
   sz = n;
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   dt.assign(4*sz, 0); 
   build(v, 1, 0, sz-1); 
   while(q--)
   {
    int t; 
    cin >> t;
    if(t==1)
    {
        int a,b; 
        cin >> a >> b;
        update(a-1,b);
    }
    else 
    {
        int a,b; 
        cin >> a >> b;
        cout << query(a-1,b-1) << "\n";
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