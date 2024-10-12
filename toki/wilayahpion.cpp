#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n,m; 
    cin >> n >> m; 
    if(n==m && (n/2)%2==0 && (m/2)%2==0) cout << "Yes" << endl; 
    else
    {
        int dx = n/2; 
        int dy = m/2; 
        // gerak ke bawah 
        int i=1; 
        int j=1; 
        while(n-i<=2)
        {
            i+=2; 
        } 
        while(m-j<=2) 
        {
            j+=2;
        } 
        if(i==dx && j==dy) cout << "Yes" << endl; 
        else cout << "No" << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}