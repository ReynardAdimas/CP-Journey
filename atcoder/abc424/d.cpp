#include<bits/stdc++.h>
using namespace std;

int popcount(int x) {
    return __builtin_popcount(x);
}

int solve(int H, int W, const vector<string>& grid) {
    int ALL = 1 << W;
    vector<int> orig_mask(H, 0);
    for (int i = 0; i < H; i++) {
        int mask = 0;
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') mask |= (1 << j);
        }
        orig_mask[i] = mask;
    }

    vector<vector<int>> valid_masks(H);
    vector<unordered_map<int,int>> cost_for_mask(H);

    for (int i = 0; i < H; i++) {
        int orig = orig_mask[i];
        for (int m = 0; m < ALL; m++) {
            if ((m & ~orig) == 0) { 
                valid_masks[i].push_back(m);
                cost_for_mask[i][m] = popcount(orig) - popcount(m);
            }
        }
    }

    const int INF = 1e9;
    unordered_map<int,int> dp_prev, dp_cur;
    for (int m : valid_masks[0]) {
        dp_prev[m] = cost_for_mask[0][m];
    }

    for (int i = 1; i < H; i++) {
        dp_cur.clear();
        unordered_map<int,int> prev_pair, cur_pair;
        for (int m : valid_masks[i-1]) prev_pair[m] = m & (m >> 1);
        for (int m : valid_masks[i])   cur_pair[m]  = m & (m >> 1);

        for (int pm : valid_masks[i-1]) {
            if (!dp_prev.count(pm)) continue;
            int base = dp_prev[pm];

            for (int cm : valid_masks[i]) {
                if ((prev_pair[pm] & cur_pair[cm]) == 0) {
                    int newc = base + cost_for_mask[i][cm];
                    if (!dp_cur.count(cm) || newc < dp_cur[cm]) {
                        dp_cur[cm] = newc;
                    }
                }
            }
        }
        dp_prev = dp_cur;
    }

    int ans = INF;
    for (auto &p : dp_prev) ans = min(ans, p.second);
    return ans;
}

void solution()
{
  int H, W;
        cin >> H >> W;
        vector<string> grid(H);
        for (int i = 0; i < H; i++) cin >> grid[i];
        cout << solve(H, W, grid) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}