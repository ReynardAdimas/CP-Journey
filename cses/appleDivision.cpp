#include<bits/stdc++.h>
using namespace std; 

using ll = long long;
vector<int> q;
int n; 
ll solve(int idx, ll sum1, ll sum2)
{
    if(idx == n)
    {
        return abs(sum1-sum2);
    }
    else 
    {
        return min(solve(idx+1, sum1 + q[idx], sum2), solve(idx + 1, sum1, sum2 + q[idx]));
    }
}

void solution()
{
    cin >> n; 
    q.resize(n);
    for(int i=0;i<n;i++)
    {
        cin >> q[i];
    }     
    cout << solve(0,0,0) << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}