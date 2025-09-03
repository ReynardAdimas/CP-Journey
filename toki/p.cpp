#include <bits/stdc++.h>
using namespace std;

struct State {
    int value;
    int weight;
    vector<int> items;

    bool betterThan(const State& other) const {
        if (value != other.value)
            return value > other.value;
        if (weight != other.weight)
            return weight < other.weight;
        return items < other.items; // leksikografis lebih kecil
    }
};

void solution() {
    int n, k;
    cin >> n >> k;
    vector<int> w(k), h(k);
    for (int i = 0; i < k; i++) {
        cin >> w[i] >> h[i];
    }

    vector<vector<State>> dp(k + 1, vector<State>(n + 1));

    for (int i = 1; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            // opsi 1: tidak ambil item i
            State not_take = dp[i - 1][j];
            State take = not_take;

            if (j >= w[i - 1]) {
                // opsi 2: ambil item i
                State prev = dp[i - 1][j - w[i - 1]];
                take.value = prev.value + h[i - 1];
                take.weight = prev.weight + w[i - 1];
                take.items = prev.items;
                take.items.push_back(i); // simpan 1-based index
            }

            // pilih opsi lebih baik
            dp[i][j] = take.betterThan(not_take) ? take : not_take;
        }
    }

    vector<int>& result = dp[k][n].items;
    sort(result.begin(), result.end());
    for (int idx : result) {
        cout << idx << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    return 0;
}
