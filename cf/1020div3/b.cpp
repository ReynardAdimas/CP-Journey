#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n,x; 
   cin >> n >> x; 
   for(int i=0;i<n-1;i++)
   {
    cout << i << " "; 
}
cout << x;
   cout << endl;
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