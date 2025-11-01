#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solution()
{
   int n, k; 
   cin >> n >> k; 
   string s; 
   cin >> s; 
   vector<int> freq(26,0); 
   for(int i=0;i<n;i++)
   {
    freq[s[i]-'a']++;
   } 
   ll oddCnt = 0; 
   for(int i=0;i<26;i++)
   {
    oddCnt += freq[i] % 2;
   } 
   if(oddCnt > k+1)
   {
    cout << "NO\n"; 
   }
   else 
   {
    cout << "YES\n";
   }
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