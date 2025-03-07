#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   string s;
   cin >> s;
   bool cek = false;
   for(int i=0;i<s.length();i++)
   {
    if(s[i]==s[i+1])
    {
        cek=true;
        break;
    }
   }
   if(cek)
   {
    cout << 1 << endl;
   }
   else
   {
    cout << s.length() << endl;
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