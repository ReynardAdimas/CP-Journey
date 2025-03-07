#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n;
    cin >> n;
    for(int i=n-1;i>=0;i--)
    {
        cout << i+1 << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}