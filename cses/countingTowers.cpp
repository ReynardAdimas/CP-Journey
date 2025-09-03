#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int maks = 1e6 + 5;
int dp[maks];

void pre() {
    dp[1] = 2;
    dp[2] = 8;
    for (int i = 3; i < maks; i++) {
        dp[i] = (2LL * dp[i - 1] + 2LL * dp[i - 2]) % mod;
    }
}

void solution() {
    int n;
    cin >> n;
    cout << dp[n] << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    pre();
    while (t--) {
        solution();
    }

    return 0;
}
