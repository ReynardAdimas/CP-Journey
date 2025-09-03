#include<bits/stdc++.h>
using namespace std;


// Lazy Range Flip
void solution()
{
   int n,m; 
   cin >> n >> m; 
   string s,t; 
   cin >> s; 
   cin >> t; 
   vector<int> flip(n+2, 0); 
   for (int i = 0; i < m; i++)
   {
    int l,r; 
    cin >> l >> r; 
    l--;r--; 
    flip[l] ^= 1; 
    flip[r+1] ^= 1; 
   }

   int state = 0; 
   for(int i=0;i<n;i++)
   {
    state ^= flip[i]; 
    if(state % 2 == 1)
    {
        s[i] = t[i];
    }
   }
   cout << s << "\n";
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
