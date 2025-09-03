#include<bits/stdc++.h>
using namespace std;

int n,l,r;
string s;

void solution()
{
   cin >> n >> l >> r; 
   cin >> s;
   for(int i=l-1;i<r;i++)
   {
    if(s[i]!='o')
    {
        cout << "No" << endl;
        return;
    }
   }
   cout << "Yes" << endl;
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