#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int x,y,k;
   cin >> x >> y >> k;
   int A = (x+k-1)/k; // ceil
   int B = (y+k-1)/k; // ceil
   if(A<=B)
   {
    cout << 2*B << endl;
   }
   else
   {
    cout << 2*A-1 << endl;
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