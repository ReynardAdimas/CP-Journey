#include<bits/stdc++.h>
using namespace std; 

const int mod = 998244353;

void solution()
{
   string s; 
   cin >> s; 
   int ans=1;
   int cnt = 1; 
   int cekSama = 0; 
   for(int i=0;i<s.length();i++)
   {
    if(s[i]==s[i+1])
    {
        cnt++;
        cekSama++; 
    }
    else 
    {
        ans = cekSama*cnt % mod;
    }
   } 
   if(cekSama==0)
   {
      ans=1;
   }
   cout << cekSama << " " << ans;
   cout << endl;
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