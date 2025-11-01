#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 

   vector<int> v(n); 
   vector<bool> cek(n+1, 0); 

   for(int i=0;i<n;i++)
   {
    cin >> v[i]; 
    if(v[i] != -1)
    {
        if(cek[v[i]])
        {
            cout << "No" << "\n";
            return;
        }
        cek[v[i]] = true;
    }
   } 

   vector<int> num; 
   for(int i=1;i<=n;i++)
   {
    if(!cek[i])
    {
        num.push_back(i);
    }
   } 

   for(int i=0;i<n;i++)
   {
    if(v[i] == -1)
    {
        v[i] = num.back();
        num.pop_back();
    }
   } 

   cout << "Yes" << "\n"; 
   for(int i=0;i<n;i++)
   {
    cout << v[i] << (i==n-1?"":" ");
   }
   cout << "\n";
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