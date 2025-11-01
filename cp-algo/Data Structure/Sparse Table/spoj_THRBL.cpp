// SPOJ - THRBL
#include<bits/stdc++.h>
using namespace std;

struct SparseTable{
    int n,k;
    vector<vector<int>> st; 
    vector<int> log_table; 

    SparseTable(const vector<int>& arr) 
    {
        n = arr.size(); 
        k = log2(n) + 1; 
        st.assign(n, vector<int>(k)); 
        log_table.assign(n+1,0); 

        // precom
        for(int i =2;i<=n;i++)
        {
            log_table[i] = log_table[i/2]+1;
        } 
        // base case 
        for(int i=0;i<n;i++)
        {
            st[i][0] = arr[i]; 
        }

        // build 
        for(int j=1;j<k;j++)
        {
            for(int i=0;i+(1<<j) <= n;i++)
            {
                st[i][j] = max(st[i][j-1], st[i+(1<<(j-1))][j-1]);
            }
        }
    }
    int query(int L, int R)
    {
        int j = log_table[R-L+1]; 
        return max(st[L][j], st[R-(1<<j)+1][j]);
    }

};

void solution()
{
   int n,m;
   cin >> n >> m; 
   vector<int> v(n); 
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   }
   SparseTable sp(v);
   int sukses = 0;
   for(int i=0;i<m;i++)
   {
    int L,R; 
    cin >> L >> R; 
    int start_hill_idx = L-1; 
    int end_hill_idx = R-1; 
    if(abs(start_hill_idx - end_hill_idx) <= 1)
    {
        sukses++; 
        continue;
    }
    int qL = start_hill_idx+1; 
    int qR = end_hill_idx -1; 
    int max_height = sp.query(qL, qR); 
    if(v[start_hill_idx] > max_height) sukses++;
   }
   cout << sukses << "\n";
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