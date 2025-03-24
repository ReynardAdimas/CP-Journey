#include<bits/stdc++.h>
#define ll long long
#define sz(x) (int)size(x)
using namespace std; 

vector<ll> psum(vector<ll> a, int p)
{
    int szA = a.size();
    vector<ll> psum(szA + 1);
    for(int i=0;i<szA; i++)
    {
        if(a[i]==p)
        {
            psum[i+1] = psum[i] + 1;
        }
        else 
        {
            psum[i+1] = psum[i];
        }
    }
    return psum;
}

void solution()
{
   int n,q; 
   cin >> n >> q; 
   vector<ll> a(n); 
   for(ll &x:a) cin >> x;
    vector<ll> holsteins, guernseys, jerseys; 
    holsteins = psum(a, 1); 
    guernseys = psum(a, 2); 
    jerseys = psum(a, 3); 
    for(int i=0;i<q;i++)
    {
        int l,r; 
        cin >> l >> r; 
        cout << holsteins[r] - holsteins[l-1] << " " << guernseys[r] - guernseys[l-1] << " " << jerseys[r] - jerseys[l-1] << endl; 
    } 
    // for(int i=0;i<n;i++)
    // {
    //     cout << guernseys[i] << " ";
    // }

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