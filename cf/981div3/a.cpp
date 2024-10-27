#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n; 
    cin >> n; 
    if(n%2) cout << "Kosuke" << endl;
    else cout << "Sakurako" << endl;
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