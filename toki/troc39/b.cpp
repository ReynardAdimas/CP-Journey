#include<bits/stdc++.h>
using namespace std; 



void solution()
{
    string s; 
    cin >> s; 
    bool cek = true;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='T' && i>0)
        {
            cek =  false;
            break;
        }
        else if(s[i]!='T' && s[i]!='C' && s[i]!='F')
        {
            cek =  false;
            break;
        }
        else 
        {
            continue;
        }
    }
    if(cek)
    {
        cout << "YA" << endl;
    }
    else 
    {
        cout << "TIDAK" << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}