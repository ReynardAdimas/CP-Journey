#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   vector<int> f(n+1); 
   for(int i=1;i<=n;i++)
   {
    cin >> f[i];
   }
   bool cek = false; 
   for(int i=1;i<=n;i++)
   {
    int a = f[i]; 
    int b = f[a]; 
    int c = f[b]; 
    if(c==i)
    {
        cek = true; 
        break;
    }
   }
   if(cek)
   {
    cout << "YES" << "\n"; 
   }
   else 
   {
    cout << "NO" << "\n";
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