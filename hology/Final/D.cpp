#include<bits/stdc++.h>
using namespace std;

void solution()
{
  int N;
  cin >> N;

  vector<int> A;
  multiset<int> diff;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;

    auto it = lower_bound(A.begin(), A.end(), a);
    int idx = it - A.begin();

    if (idx < A.size()) {
      if (idx > 0) {
        // cout << "Erase l " << abs(A[idx] - A[idx - 1])  << endl;
        diff.extract(abs(A[idx] - A[idx - 1]));
      }
    }
  
    A.insert(it, a);

    if (idx < A.size()) {
      if (idx > 0) {
        diff.insert(abs(A[idx] - A[idx - 1]));
      // cout << "Insert l " << abs(A[idx] - A[idx - 1]) << endl;
      }

      if (idx + 1 < A.size()) {
        diff.insert(abs(A[idx + 1] - A[idx]));
        // cout << "Insert r " << abs(A[idx + 1] - A[idx]) << endl;
      }
    }

    // for (auto a : A) cout << a << " ";
    // cout << endl;
    
    // cout << "diff: ";
    // for (auto d : diff) cout << d << " ";
    // cout << endl;
    
    bool yes = true;
    if (!diff.empty()) {
      yes = *diff.begin() == *diff.rbegin();
    }
    if (yes) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
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