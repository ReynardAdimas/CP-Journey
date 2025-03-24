#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0; 

    for (int i = 1; i <= n; i++) {
        int temp = i; 
        while (temp > 0)
        {
            int digit = temp%10; 
            temp/=10; 
            if(digit > 0)
            {
                dp[i] = min(dp[i], dp[i-digit]+1);
            }
        }
    }

    cout << dp[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        solution();
    }
    return 0;
}
