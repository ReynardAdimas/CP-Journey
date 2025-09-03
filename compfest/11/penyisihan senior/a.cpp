#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<pair<ll, ll>> intervals;

void solution() {
    ll l, r;
    cin >> l >> r;
    intervals.push_back({l, r});
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solution();
    }

    sort(intervals.begin(), intervals.end());

    vector<pair<ll, ll>> merged;

    for (auto [l, r] : intervals) {
        if (merged.empty() || merged.back().second < l - 1) {
            merged.push_back({l, r});
        } else {
            merged.back().second = max(merged.back().second, r);
        }
    }

    ll jumlah = 0;
    for (auto [l, r] : merged) {
        jumlah += (r - l + 1) * (l + r) / 2;
    }

    cout << jumlah << endl;

    return 0;
}
