#include<bits/stdc++.h>
using namespace std;

void solution()
{
  int N;
  cin >> N;

  multiset<int> A;
  multiset<int> diff;

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;

    auto it = A.insert(a);

    auto next = it;
    next++;

    if (it != A.begin()) {
      auto prev = it;
      prev--;
      
      diff.insert(a - *prev);
      if (next != A.end()) {
        diff.extract(*next - *prev);
      }
    }

    if (next != A.end()) {
        diff.insert(*next - a);
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