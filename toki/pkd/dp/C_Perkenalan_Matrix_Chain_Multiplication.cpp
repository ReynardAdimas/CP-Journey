#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f[105][105], f1[105];
const ll mod = 26101991LL;
vector<ll> v;

// cari biaya minimum mengalikan matriksx-matriksy
ll cari(int x, int y)
{
    if(x==y) return 0; 
    if(f[x][y] != 0) return f[x][y]; 

    ll best = LONG_LONG_MAX; 
    for(int i=0;i<y-x;i++)
    {
        // kenapa rekursifnya gini
        best = min(best, cari(x,x+i) + cari(x+i+1, y) + v[x] * v[x+i+1] * v[y+1]);
    }
    f[x][y] = best;
    return best;
}

ll min_cost[105][105]; 
ll count_ways[105][105];

void q2(int n, const vector<ll>& v)
{
    for(int i=1;i<=n;i++)
    {
        min_cost[i][i] = 0; 
        count_ways[i][i] = 1;
    } 

    for(int len=2;len<=n;len++)
    {
        for(int i=1;i<=n-len+1;i++)
        {
            int j=i+len-1;
            min_cost[i][j] = -1; // blm dihitung

            for(int k=i;k<j;k++)
            {
                ll curr = min_cost[i][k] + min_cost[k+1][j] + v[i] * v[k+1] * v[j+1];

                if(min_cost[i][j] == -1 || curr < min_cost[i][j])
                {
                    min_cost[i][j] = curr; 
                    count_ways[i][j] = count_ways[i][k] * count_ways[k+1][j]; 
                    count_ways[i][j] %= mod;
                }
                else if(curr == min_cost[i][j])
                {
                    count_ways[i][j] += count_ways[i][k] * count_ways[k+1][j]; 
                    count_ways[i][j] %= mod;
                }
            }
        }
    } 
    cout << count_ways[1][n] << '\n';
}

ll dp(int x)
{
    if(x==1) return 1;
    if(f1[x] != 0) return f1[x]; 
    ll res = 0; 
    for(int i=1;i<x;i++)
    {
        res+= dp(i) * dp(x-i);
        res %= mod;
    }
    f1[x] = res; 
    return res;
}

void solution()
{
   int n; 
   cin >> n; 
   v.push_back(0);
   for(int i=0;i<=n;i++)
   {
    int a; 
    cin >> a; 
    v.push_back(a);
   }
   int q; 
   cin >> q;
   if(q==1)
   {
    cout << cari(1,n) << '\n';
   }
   else if(q==2)
   {
    q2(n,v);
   } 
   else if(q==3) 
   {
    cout << dp(n) << '\n';
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