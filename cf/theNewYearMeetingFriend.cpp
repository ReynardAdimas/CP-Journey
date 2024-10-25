#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    vector<int>arr(3); 
    for(int i=0;i<3;i++)
    {
        cin >> arr[i];
    } 
    int ans = 0;
    sort(arr.begin(), arr.end()); 
    int i=0; 
    ans += arr[i+1] - arr[i]; 
    ans += arr[i+2] - arr[i+1]; 
    cout << ans << endl;    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}