#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   string s;
   cin >> s;
   reverse(s.begin(), s.end()); 
   for(int i=0;i<s.size();i++)
   {
     if(s[i]=='p')
     {
        s[i] = 'q';
     }
     else if(s[i]=='q')
     {
        s[i] = 'p';
     }
   }
   cout << s << endl;
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