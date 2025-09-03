#include<bits/stdc++.h>
using namespace std; 


void solution()
{
    int n; 
    cin >> n;
    int a[n]; 
    for(int i=0;i<n;i++) cin >> a[i]; 
    vector<int> b,c; 
    sort(a,a+n);
    if(a[0]==a[n-1]) cout << -1 << endl;
    else
    {
        int i=0;
        while(a[i]==a[0]) i++; 
        cout << i << " " << n-i << endl;
        for(int j=0;j<i;++j) cout << a[j] << " "; 
        cout << endl;
        for(int j=i;j<n;++j) cout << a[j] << " ";
        cout << endl;
    }
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