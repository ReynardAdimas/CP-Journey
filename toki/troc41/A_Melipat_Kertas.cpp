#include<bits/stdc++.h>
using namespace std;

int l,w,a;

void solution()
{
   cin >> l >> w >> a; 
   for(int i=l;i>=0;i/=2)
   {
    for(int j=w;j>=0;j/=2)
    {
        if(i*j==a)
        {
            cout << "YA" << endl;
            return;
        }
        if(j==0) break;
    }
    if(i==0) break;
   }
   cout << "TIDAK" << endl;
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