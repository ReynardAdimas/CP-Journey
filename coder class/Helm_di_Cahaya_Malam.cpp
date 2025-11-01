#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n,p; 
   cin >> n >> p; 
   pair<int, int> a[200005]; 
   for(int i=0;i<n;i++) cin >> a[i].second;
   for(int i=0;i<n;i++) cin >> a[i].first;
   sort(a,a+n);
    n--;
   ll ans = p; 
   for(int i=0;i < n;i++)
   {
    if(a[i].first <= p)
    {
       if(a[i].second < n)
       {
        ans += a[i].first * a[i].second; 
        n-=a[i].second;
       }
       else 
       {
        ans += a[i].first * n; 
        n=0;
       }
    }
    else 
    {
        break;
    }
   }
   ans += n*p;
   cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}