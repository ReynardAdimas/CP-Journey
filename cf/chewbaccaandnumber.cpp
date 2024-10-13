#include<bits/stdc++.h>
using namespace std; 

void solution()
{

    string a;
    cin >> a; 
    for(int i=0;i<a.length();i++)
    {
        char c = a[i];
        if(i==0 && c=='9') continue; 
        if(c>='5')
        {
            a[i] = '0' + ('9'-c);
        }
    } 
    cout << a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}