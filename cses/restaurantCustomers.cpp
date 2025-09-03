#include<bits/stdc++.h>
using namespace std;

void solution()
{
   long long n; 
   multiset<long long> s;
   cin >> n; 
   for(int i=0;i<n;i++)
   {
    long long a,b; 
    cin >> a >> b; 
    for(int j=a;j<=b;j++) s.insert(j);
   } 
   int maks = 0; 
   auto it = s.begin(); 
   while(it != s.end()) 
   {
    auto range = s.equal_range(*it); 
    int cnt = distance(range.first, range.second); 
    if(cnt > maks)
    {
        maks = cnt; 
    }
    it = range.second;
   } 
   cout << maks << endl;
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