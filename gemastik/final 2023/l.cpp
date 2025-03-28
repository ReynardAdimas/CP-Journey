#include<bits/stdc++.h>
using namespace std;

using i64 = int64_t;

void solution() {
  int N;
  cin >> N;

  vector<i64> A(N + 1);

  for (int i = 1; i <= N; i++)
    cin >> A[i];

  vector<i64> ans(N + 1, 0), factorSum(N + 1, 0);
  for (int i = N; i > 0; i--) {
    if (i < N)
      ans[i] = ans[i + 1];

    for (int j = i; j <= N; j += i) {
      factorSum[j] += A[i];

      i64 need = factorSum[j] - 2 * A[j];

      if (need < 0) continue;

      A[j] += need;
      ans[i] += need;

      for (int k = j; k <= N; k += j) {
        factorSum[k] += need;
      }
    }
  }

  for (int i = 1; i <= N; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solution();
  return 0;
}