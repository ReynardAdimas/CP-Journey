#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,r,c; 

void solution()
{
   cin >> n >> m >> r >> c; 
   if (m > n) {
    swap(m, n);
   }

   bool cek = (m == 3 && (n == 8 || n == 10)) || (m == 4 && (n == 6 || n == 8));

   if (m >= 5) {
    if (m % 2 == 0 || n % 2 == 0) {
        cek = true;
    }
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