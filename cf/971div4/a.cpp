#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int a,b,c; 
    cin >> a >> b; 
    c = a+1;
    cout << (c-a)+(b-c) << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    //t = 0;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}