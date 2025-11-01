#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,m,k; 
   cin >> n >> m >> k; 
   long long minumSusu = 0;
   vector<int> v(n); 
   for(int i=0;i<n;i++) cin >> v[i]; 
   int maxDays = 0; 
   priority_queue<int, vector<int>, greater<int>> biscuitDays; 
   for(int d=0;d<n;d++)
   {
    int curr = v[d]; 
    biscuitDays.push(curr); 
    if(biscuitDays.size() > k)
    {
        int susu = biscuitDays.top(); 
        biscuitDays.pop(); 
        minumSusu += susu;
    } 
    if(minumSusu <= m)
    {
        maxDays = d+1; 
    } 
    else break;
   }
   cout << maxDays << "\n";
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