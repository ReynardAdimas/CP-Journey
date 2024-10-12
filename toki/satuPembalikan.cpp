#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n, count=0; 
    cin >> n;
    int a[n]; 
    int b[n]; 
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i]; 
    for(int i=0;i<n;i++) 
    {
        if(a[i]==b[i]) count++;
    }
    cout << count << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}