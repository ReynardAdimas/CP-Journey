#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string Xs;
    if(!(cin >> Xs)) return 0;
    int L, R;
    cin >> L >> R;

    // Parse Xs into fraction a/b
    int64 a = 0, b = 1;
    auto pos = Xs.find('.');
    if(pos == string::npos){
        // integer
        a = stoll(Xs);
        b = 1;
    } else {
        string intpart = Xs.substr(0, pos);
        string fracpart = Xs.substr(pos+1);
        // remove trailing zeros in frac? Not necessary; we'll reduce by gcd.
        string all = intpart + fracpart;
        a = stoll(all);
        b = 1;
        for(size_t i=0;i<fracpart.size();++i) b *= 10;
    }
    // reduce
    int64 g = std::gcd(llabs(a), b);
    a /= g; b /= g;

    // check X in [L,R]  <=> b*L <= a <= b*R
    // note a can be up to ~1e9, use int64
    if(a < (int64)b * L || a > (int64)b * R){
        cout << -1 << '\n';
        return 0;
    }

    // minimal k is b
    int64 k = b;
    cout << k << '\n';

    // construct b integers in [L,R] summing to a
    vector<int> res;
    res.assign((size_t)k, L);
    int64 curSum = (int64)k * L;
    int64 extra = a - curSum; // >=0 and <= k*(R-L)
    for(size_t i=0; i<res.size() && extra>0; ++i){
        int64 can = R - L;
        int64 add = min(can, extra);
        res[i] += (int)add;
        extra -= add;
    }
    // print
    for(size_t i=0;i<res.size();++i){
        if(i) cout << ' ';
        cout << res[i];
    }
    cout << '\n';
    return 0;
}