#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    string a,b; 
    string c = "_";
    // abcdef 
    // abcef
    cin >> a >> b; 
    int szA = a.length();
    int szB = b.length();
    int diff = 0; 
    if(szA != szB+1)
    {
        cout << "Wah, tidak bisa :(" << endl;
        return;
    }
    for(int i=0;i<szA;i++)
    {
        string baru = a.substr(0, i) + a.substr(i+1);
        if(baru==b)
        {
            cout << "Tentu saja bisa!" << endl;
            return;
        }
    }
    
    cout << "Wah, tidak bisa :(" << endl;
    
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