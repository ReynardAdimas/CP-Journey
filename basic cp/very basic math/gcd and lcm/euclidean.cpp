// euclidean = algoritma untuk mencari fpb 2 bilangan
#include<bits/stdc++.h>
using namespace std; 

int euc(int a, int b)
{
    if(a==0) return b; 
    if(b==0) return a;
    if(a==b) return a;
    if(a>b) return euc(a-b,b);
    return euc(a,b-a);
}

void solution()
{
   cout << euc(12, 16) << endl;
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