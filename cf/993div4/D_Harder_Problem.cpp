#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n; 
   vector<int> a,b;
   for(int i=0;i<n;i++)
   {
     int x; 
     cin >> x;
     a.push_back(x);
   }
   b.push_back(a[0]);
   for(int i=1;i<n;i++)
   {
    if(a[i-1]==a[i])
    {
        b.push_back(i);
    }
    else{
        b.push_back(i+1);
    }
   }
   for(int i=0;i<n;i++)
   {
    cout << b[i] << " ";
   }
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