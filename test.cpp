#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n,m; 
    cin >> n >> m; 
    string op; 
    int first; 
    int second; 
    int sum = 0;
    cin >> first;
    sum+=first; 
    n--;
    while(n--)
    {
        cin >> op >> second; 
        if(op=="+")
        {
            sum+=second;
        }
        else 
        {
            sum-=second;
        }
    } 
    cout << sum%m << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}