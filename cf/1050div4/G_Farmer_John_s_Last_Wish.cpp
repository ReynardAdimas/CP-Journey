#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

const int MAXN = 200005;
int freq[MAXN];
int dp[MAXN];

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    std::fill(freq, freq + MAXN, 0);

    for (int i = 0; i < n; ++i) {
        freq[a[i]]++;

        std::fill(dp, dp + MAXN, 0);
        
        for (int d = n; d >= 1; --d) {
            int count_multiples = 0;
            for (int j = d; j <= n; j += d) {
                count_multiples += freq[j];
            }
            dp[d] = count_multiples;
        }

        for (int d = n; d >= 1; --d) {
            for (int j = 2; d * j <= n; ++j) {
                dp[d] -= dp[d * j];
            }
        }
        
        int g_i = 0;
        for (int d = 2; d <= n; ++d) {
            if (dp[d] > 0) {
                g_i = std::max(g_i, dp[d]);
            }
        }

        std::cout << g_i << (i == n - 1 ? "" : " ");
    }
    std::cout << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}