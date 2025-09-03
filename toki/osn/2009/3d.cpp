#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n,m;
   cin >> n >> m;
   int bebek[n];
   int sepatu[m];
   for(int i=0;i<n;i++)
   {
    cin >> bebek[i];
   }
   for(int i=0;i<m;i++)
   {
    cin >> sepatu[i];
   } 
   int total = 0;
   sort(bebek, bebek+n);
   sort(sepatu, sepatu+m);
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(sepatu[i]==bebek[j] || sepatu[i]==bebek[j]+1)
        {
            cout << sepatu[i] << " untuk " << bebek[j] << endl;
            total++; 
            bebek[j] = -1;
            sepatu[i] = -1;
        }
    }
   }
   cout << total << endl;
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