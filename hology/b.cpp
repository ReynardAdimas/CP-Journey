#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,r,c; 

void solution()
{
   cin >> n >> m >> r >> c; 
   if(n>m)
   {
    swap(n,m);
   } 
   bool cek = true; 
   if((n%2==1) && (m&2==1)) 
   {
    cek=false; 
   }
   else if(m==1 || m==2 || m==4)
   {
    cek=false;
   }
   else if(n==3 && (m==4 || m==6 || m==8))
   {
    cek = false;
   }

   if(cek) cout << "YES" << "\n";
   else cout << "NO" << "\n";
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