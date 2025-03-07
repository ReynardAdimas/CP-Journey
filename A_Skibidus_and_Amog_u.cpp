#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   string s; 
   cin >> s;
   if(s=="us")
   {
    cout << "i" << endl;
   }
   else
   {
    int idx = s.length()-2; 
    s.erase(idx);
    s+='i';
    cout << s << endl;
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