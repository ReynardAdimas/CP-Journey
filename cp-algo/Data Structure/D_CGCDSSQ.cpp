#include <bits/stdc++.h>
using namespace std;

struct SparseTable {
    int n, K;
    vector<vector<int>> st;
    vector<int> log_table;

    SparseTable(const vector<int>& arr) {
        n = arr.size();
        K = log2(n) + 1;
        st.assign(n, vector<int>(K));
        log_table.assign(n + 1, 0);

        // Precompute log2
        for (int i = 2; i <= n; i++)
            log_table[i] = log_table[i / 2] + 1;

        // Base case
        for (int i = 0; i < n; i++)
            st[i][0] = arr[i];

        // Build Sparse Table
        for (int j = 1; j < K; j++) {
            for (int i = 0; i + (1 << j) <= n; i++) {
                st[i][j] = min(st[i][j - 1],
                               st[i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    int query(int L, int R) {
        int j = log_table[R - L + 1];
        return min(st[L][j], st[R - (1 << j) + 1][j]);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    SparseTable sp(A);
    cin >> Q;
    while (Q--) {
        int q;
        cin >> q;
        cout << sp.query(q) << "\n";
    }
}
