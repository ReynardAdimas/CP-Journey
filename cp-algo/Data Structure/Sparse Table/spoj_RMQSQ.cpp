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

        // pre 
        for(int i=2;i<=n;i++)
        {
            log_table[i] = log_table[i/2]+1; 
        }

        // base case 
        for(int i=0;i<n;i++)
        {
            st[i][0] = arr[i];
        }

        // build sparse table 
        for(int j=1;j<k;j++)
        {
            for(int i=0;i+(1<<j)<=n;i++)
            {
                st[i][j] = min(st[i][j-1], st[i+(1<<(j-1))][j-1]);
            }
        }
    } 
    int query(int L, int R)
    {
        int j = log_table[R-L+1];
        return min(st[L][j], st[R-(1<<j)+1][j]);
    }
};

void solution()
{
   int N,Q; 
   cin >> N;
   vector<int> v(N); 
   for(int i=0;i<N;i++)
   {
    cin >> v[i];
   }
   SparseTable sp(v); 
   cin >> Q;
   while(Q--)
   {
    int L,R; 
    cin >> L >> R;
    cout << sp.query(L,R) << '\n';
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