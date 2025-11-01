#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k, vector<int>& v)
{
    vector<int> target(n); 
    iota(target.begin(), target.end(), 1); 
    if(v == target) return 0; 
    queue<pair<vector<int>, int>> q; // (permutasi, jumlah langkah) 
    set<vector<int>> visited;  
    q.push({v,0}); 
    visited.insert(v); 
    while(!q.empty())
    {
        pair<vector<int>, int> curr = q.front(); 
        q.pop(); 
        vector<int> curr_perm = curr.first; 
        int step = curr.second; 

        for(int i=0;i<=n-k;i++)
        {
            vector<int> next = curr_perm; 
            reverse(next.begin()+i, next.begin()+i+k); 

            if(visited.find(next) == visited.end())
            {
                if(next == target)
                {
                    return step+1;
                }
                visited.insert(next); 
                q.push({next, step+1});
            }
        }
    }
    return -1;

}

void solution()
{
   int n,k; 
   cin >> n; 
   vector<int> v(n);
   for(int i=0;i<n;i++) cin >> v[i]; 
    cin >> k; 
    int result = solve(n,k,v); 
    cout << result << "\n";
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