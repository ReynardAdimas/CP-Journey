#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MAXN 200005

bitset<MAXN> isPrime;

void sieve(ll R) {
    isPrime.set(); 
    isPrime[0] = isPrime[1] = 0;
    for (ll i = 2; i * i <= R; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= R; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}
vector<ll> findLongest(ll L, ll R) {
    sieve(R);
    vector<ll> longestSeq;
    for (ll start = L; start <= R; start++) {
        if (!isPrime[start]) continue;
        vector<ll> seq;
        ll curr = start;
        while (curr <= R && isPrime[curr]) {
            seq.push_back(curr);
            if (curr > (LLONG_MAX - 1) / 4) break; 
            curr = 4 * curr + 1;
        }
        if (seq.size() > longestSeq.size()) {
            longestSeq = seq;
        }
    }
    return longestSeq;
}

int main() {
    ll L, R;
    cin >> L >> R;
    if (L > R) {
        cout << "0\n";
        return 0;
    }
    vector<ll> result = findLongest(L, R);
    cout << result.size() << endl;
    for (ll num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
