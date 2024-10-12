#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<long long, int>> p;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    vector<long long> fsum(n + 1, 0); // Mendeklarasikan vektor fsum dengan ukuran n+1 dan menginisialisasi semua elemen dengan nilai 0
    for(int i = 0; i < n; i++) {
        fsum[i + 1] = fsum[i] + p[i].first;
    }

    long long t = fsum[n];
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, t - p[i].first + p[i].second);
    }
    cout << ans << endl;
    return 0;
}
