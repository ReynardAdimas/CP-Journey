#include<bits/stdc++.h>
using namespace std; 
vector<pair<int, int>> p;
vector<int> ans;
int pangkat(int x)
{
    return x*x;
}

void solution()
{
    int n; 
    //cout << "gas" << endl;
    cin >> n; 
    p.resize(n);
    for(int i=0;i<n;i++)
    {
        int x; 
        cin >> x; 
        p[i].first = x;
    } 
    for(int i=0;i<n;i++)
    {
        int y; 
        cin >> y; 
        p[i].second = y;
    }  
    int maks = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int count = pangkat(p[i].first - p[j].first) + pangkat(p[i].second - p[j].second); 
            ans.push_back(count); 
            maks = max(maks, count);
        }
    } 
    cout << maks << endl;
   
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}