#include<bits/stdc++.h>
using namespace std;

using i64 = long long;

void solution()
{
    string str;
    cin >> str;
    
    i64 L, R;
    cin >> L >> R;

    i64 a = 0, b = 1;
    bool afterDot = false;

    for (char ch : str) {
        if (ch == '.') {
            afterDot = true;
            continue;
        }
        
        a = a * 10 + (ch - '0');
        if (afterDot) {
            b *= 10;
        }
    }

    i64 g = gcd(a, b);
    a /= g;
    b /= g;

    if (a < L * b || a > R * b) {
        cout << -1 << endl;
        return;
    }

    cout << b << endl;

    i64 extra = a - L * b;

    for (int i = 0; i < b; i++) {
        i64 add = min(R - L, extra);
        if (i > 0) cout << " ";
        cout << L + add;
        extra -= add;
    }
    cout << endl;
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