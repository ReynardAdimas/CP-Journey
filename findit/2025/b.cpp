#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solution() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    unordered_map<int, int> box;  
    int skor = 0, kapasitas = 0;

    for (int i = 1; i <= n; i++) {
        if (box[a[i]] > 0) {
            skor++;
            box[a[i]]--;    
            if (box[a[i]] == 0) box.erase(a[i]);
        } else {
            if (kapasitas < k) {
                box[a[i]]++; 
                kapasitas++;
            } else {
                auto it = box.begin();
                it->second--;
                if (it->second == 0) box.erase(it);
                box[a[i]]++;
            }
        }
    }

    cout << skor << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}
