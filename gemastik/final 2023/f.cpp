#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,m,k; 
    cin >> n >> m >> k;
    vector<long long> nilai(n+1, INT_MIN); 
    vector<int> prov(n+1); 
    vector<int> lolos(n+1, 0); 
    vector<vector<int>> wild(k+1, vector<int>(0));
    for(int i=0;i<n;i++) cin >> nilai[i]; 
    for(int i=0;i<n;i++) cin >> prov[i]; 
    for(int i=0;i<n;i++)
    {
        if(nilai[i] > lolos[prov[i]])
        {
            lolos[prov[i]] = nilai[i];
        }
    } 
    int p;
    for(int i=0;i<k;i++)
    {
        cin >> p; 
        p--;
        wild[i].push_back(nilai[p]); 
        wild[i].push_back(prov[p]);
    }    
    int ans = m+k; 
    for(int i=0;i<k;i++)
    {
        if(wild[i].size() < 2) continue;
        if(wild[i][0] == lolos[wild[i][1]]) ans--;
    } 
    cout << ans << endl;
}