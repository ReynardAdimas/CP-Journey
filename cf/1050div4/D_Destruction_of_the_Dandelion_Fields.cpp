#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n; 
   cin >> n;
   vector<int> a;
   ll sum =0; 
   for(int i=0;i<n;i++)
   {
    ll c; 
    cin >> c; 
    if(c%2==1)
    {
        a.push_back(c);
    }
    else 
    {
        sum+=c;
    }
   } 
   ll ans = 0; 
   sort(a.begin(), a.end()); 
   if(a.size() > 0)
   {
    ans = sum+a[a.size()-1]; 
    int t = (a.size()-1)/2; 
    for(int i=a.size()-2, j=0;j<t;i--,j++)
    {
        ans+=a[i];
    }
   }
   cout << ans << '\n';
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