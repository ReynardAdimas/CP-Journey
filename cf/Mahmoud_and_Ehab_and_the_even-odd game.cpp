#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n;
   cin >> n; 
   if(n%2==1)
   {
    cout << "Ehab" << endl;
   }
   else 
   {
    cout << "Mahmoud" << endl;
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