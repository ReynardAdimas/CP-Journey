#include <bits/stdc++.h>
using namespace std;

deque<pair<int,long long>> dq;
bool reversedQueue = false;

void solution() {
    string s;
    cin >> s;

    if (s == "add") {
        long long X, Y;
        cin >> X >> Y;
        if (!reversedQueue) {
            if (!dq.empty() && dq.back().first == X) dq.back().second += Y;
            else dq.push_back({X, Y});
        } else {
            if (!dq.empty() && dq.front().first == X) dq.front().second += Y;
            else dq.push_front({X, Y});
        }
        // hitung total size
        long long total = 0;
        for (auto &p : dq) total += p.second;
        cout << total << "\n";
    }
    else if (s == "del") {
        long long Y;
        cin >> Y;
        int firstOut;
        if (!reversedQueue) {
            firstOut = dq.front().first;
            while (Y > 0) {
                if (Y >= dq.front().second) {
                    Y -= dq.front().second;
                    dq.pop_front();
                } else {
                    dq.front().second -= Y;
                    Y = 0;
                }
            }
        } else {
            firstOut = dq.back().first;
            while (Y > 0) {
                if (Y >= dq.back().second) {
                    Y -= dq.back().second;
                    dq.pop_back();
                } else {
                    dq.back().second -= Y;
                    Y = 0;
                }
            }
        }
        cout << firstOut << "\n";
    }
    else if (s == "rev") {
        reversedQueue = !reversedQueue;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;
    while (Q--) {
        solution();
    }
    return 0;
}
