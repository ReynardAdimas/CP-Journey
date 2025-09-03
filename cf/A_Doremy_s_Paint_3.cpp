// find n/2 same numbers 
// 
// jika panjang map >2 jawabannya no
#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   vector<int> v(n);
   map<int, int> m; 
   for(int i=0;i<n;i++)
   {
    int a;
    cin >> a;
    m[a]++;
   } 
   bool ok = false;
   if(m.size() >= 3) 
   {
    cout << "No" << endl;
   }
   else 
   {
    if(abs(m.begin()->second-m.rbegin()->second) <= 1) // untuk mengecek apakah freekuensi dari index terkecil dan terbesar hampir sama
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
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