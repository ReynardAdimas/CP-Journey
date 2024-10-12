#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<long long> min_coins_needed(long long N, const vector<long long>& A, long long P, long long Q) {
    long long max_troops = *max_element(A.begin(), A.end());
    vector<long long> dp(max_troops + 1, INT_MAX);
    dp[0] = 0;  
    for (int i = 1; i <= max_troops; ++i) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + P);
        }
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + Q);
        }
    }

    vector<long long> results;
    for (long long troops : A) {
        results.push_back(dp[troops]);
    }

    return results;
}

int main() {
    long long N,P,Q;    
    vector<int> A;
    cin >> N >> P >> Q;
    for(int i=0;i<N;i++)
    {
        int t; 
        cin >> t; 
        A.push_back(t);
    }
    vector<long long> results = min_coins_needed(N, A, P, Q);
    for (int result : results) {
        cout << result << endl;
    }    
    return 0;
}
