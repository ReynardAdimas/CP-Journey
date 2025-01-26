#include<bits/stdc++.h>
using namespace std; 
int ans = 0;
void solution(int t)
{
   
   string s;
   cin >> s;
   if(s=="Tetrahedron")
   {
    ans += 4;
   }
   else if(s=="Cube")
   {
    ans += 6;
   }
   else if(s=="Octahedron")
   {
    ans+=8;
   }
   else if(s=="Dodecahedron")
   {
    ans+=12;
   }
   else if(s=="Icosahedron")
   {
    ans+=20;
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
        solution(t);
    }
    cout << ans << endl;
    return 0;
}