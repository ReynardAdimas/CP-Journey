#include<bits/stdc++.h>
using namespace std;

void solution()
{
   string s; 
   cin >> s; 
   int n = s.size();
   int banyak0 = 0, banyak1 = 0; 
   for(int i=0;i<n;i++)
   {
    if(s[i]=='0')
    {
        banyak0++;
    }
    else 
    {
        banyak1++;
    }
   }
   int panjangt = 0;
   for(int i=0;i<n;i++)
   {
    if(s[i]=='1' && banyak0 > 0)
    {
        banyak0--; 
        panjangt++;
    }
    else if(s[i]=='0' && banyak1 > 0)
    {
        banyak1--; 
        panjangt++;
    }
    else 
    {
        break;
    }
   } 
//    cout << n << " " << panjangt << endl;
   cout << n - panjangt << endl;
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