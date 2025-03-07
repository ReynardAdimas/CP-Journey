#include <bits/stdc++.h>
using namespace std;

void solution() {
    long long n, q, sum = 0;
    cin >> n >> q;
    
    vector<long long> a(n+1, 0);  
    vector<long long> pref(n+1, 0);  

    for (int i = 1; i <= n; i++) {
        cin >> a[i];  
        sum += a[i];  
        pref[i] = pref[i - 1] + a[i]; 
    } 

    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;

        long long old = pref[r] - pref[l-1];  
        long long ans = sum - old + k * (r - l + 1);  

        if (ans % 2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
