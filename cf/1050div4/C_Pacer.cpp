#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solution()
{
   int n; ll m; 
   cin >> n >> m; 
   vector<pair<ll, int>> jalan(n); 
   for(int i=0;i<n;i++)
   {
    cin >> jalan[i].first >> jalan[i].second;
   } 
   ll prevTime=0; 
   ll total=0; 
   ll prevSide=0; 
   for(int i=0;i<n;i++)
   {
    ll currTime = jalan[i].first; 
    ll currSide = jalan[i].second; 
    ll diffTime = currTime - prevTime; 
    ll diffSide = (prevSide != currSide); 
    if((diffTime%2) == diffSide)
    {
        total += diffTime;
    } 
    else 
    {
        total += diffTime-1;
    } 
    prevTime = currTime; 
    prevSide = currSide;
   } 
   ll last = jalan[n-1].first; 
   ll sisa = m-last; 
   total += sisa; 
   cout << total << '\n';

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