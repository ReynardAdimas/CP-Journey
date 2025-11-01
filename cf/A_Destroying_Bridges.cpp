#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,k; 
   cin >> n >> k; 
   int bridge =k;
   if(bridge >= n-1)
   {
    cout << 1 << "\n";
   }
//    else if(bridge == n-1)
//    {
//     cout << bridge+1<<"\n";
//    }
   else 
   {
    cout << n << "\n";
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