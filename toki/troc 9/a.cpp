#include<iostream> 
using namespace std; 
int main()
{
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    int j=0;
    string s; 
    cin >> s; 
    int sz = s.length();
    for(int i=0;i<sz;i++)
    {
        if(s[i]=='O')
        {
            j++;
        }
    } 
    if(j==1)
    {
        cout << "Ya" << endl;
    }
    else 
    {
        cout << "Tidak" << endl;
    }
    return 0;
}