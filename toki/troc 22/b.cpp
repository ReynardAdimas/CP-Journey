#include<bits/stdc++.h>
using namespace std;


void solution()
{
    int n; 
    cin >> n; 
    for(int i=0;i<n;i++)
    {
        if(i%3==0) cout << "a"; 
        else if((i-1)%3==0) cout << "b"; 
        else cout << 'c';
    }
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