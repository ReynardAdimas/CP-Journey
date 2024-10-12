#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> A;
int N, K;
long long dp[105][105][105];
long long countFimoracci(int idx, int len, int prev1, int prev2) {
    if (len >= K) return 1;
    if (idx == N) return 0;
    if (dp[idx][len][prev1] != -1) return dp[idx][len][prev1];

    long long count = 0;
    if (len < 2) {
        count += countFimoracci(idx + 1, len + 1, prev2, idx);
    } else {
        if (A[idx] >= A[prev1] + A[prev2]) {
            count += countFimoracci(idx + 1, len + 1, prev2, idx);
        }
    }
    count += countFimoracci(idx + 1, len, prev1, prev2);
    dp[idx][len][prev1] = count;

    return count;
}

int main() {
    cin >> N >> K;
    A.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    memset(dp, -1, sizeof(dp));

    long long result = countFimoracci(0, 0, 0, 0);

    cout << result << endl;

    return 0;
}
