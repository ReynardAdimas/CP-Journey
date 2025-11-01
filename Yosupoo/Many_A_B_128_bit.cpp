#include<bits/stdc++.h>
using namespace std;
using lint = __int128_t;

lint read(){
    lint x = 0; 
    string s; 
    cin >> s; 
    for(char &c : s)
    {
        if(isdigit(c))
        {
            x = 10*x+(c-'0');
        }
    }
    return s[0] == '-' ? -x:x;
}

void print(lint x)
{
    if(x<0) {cout << '-';x=-x;}
    if(x>9) print(x/10); 
    cout << char(x%10 + '0');
}

void solution()
{
   lint a = read(); 
   lint b = read();
   lint hasil = a+b; 
   print(hasil); 
   cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}