#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int a=0, b=0; 
    string s; 
    cin >> s; 
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A')
        {
            int c = (int)(s[i+1]);
            a+=c;
        }
        if(s[i]=='B') 
        {
            int c = (int)(s[i+1]); 
            b+=c;
        }
    } 
    if(a>b) cout << "A" << endl; 
    else cout << "B" << endl;   
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}