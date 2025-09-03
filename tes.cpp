#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n >> x; 
   if(n==0)
   {
    cout << 0 << endl;
    return 0;
   }
   string hasil = ""; 
   while(n>0)
   {
    int res = n%x; 
    hasil += (res + '0'); 
    n/=x;
   }
   reverse(hasil.begin(), hasil.end()); 
   cout << hasil << endl;
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