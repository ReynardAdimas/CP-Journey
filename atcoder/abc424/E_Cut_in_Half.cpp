#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long N, K, X;
        cin >> N >> K >> X;
        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        priority_queue<double> pq;
        for (long long a : A) pq.push((double)a);

        // Only need top X largest sticks
        for (long long i = 0; i < K; i++) {
            double top = pq.top(); pq.pop();
            pq.push(top / 2.0);
            pq.push(top / 2.0);
            if ((long long)pq.size() > X + 5) {
                // optimization: cut heap size growth
                // keep only top ~X elements
                priority_queue<double> newpq;
                for (int j = 0; j < X; j++) {
                    newpq.push(pq.top());
                    pq.pop();
                }
                pq = move(newpq);
            }
        }

        // Now find X-th largest
        for (int i = 1; i < X; i++) pq.pop();
        double ans = pq.top();

        cout << fixed << setprecision(20) << ans << "\n";
    }
    return 0;
}
