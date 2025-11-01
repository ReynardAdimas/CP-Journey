#include <bits/stdc++.h>
using namespace std;

pair<int, int> normalize_frac(pair<int, int> a, pair<int, int> b)
{
    int dx = a.first - b.first;
    int dy = a.second - b.second;

    if (dy < 0)
    {
        dx *= -1;
        dy *= -1;
    }

    int g = gcd(dx, dy);

    dx /= g;
    dy /= g;

    return {dx, dy};
}

int64_t dot(pair<int, int> v1, pair<int, int> v2) {
    return int64_t(v1.first) * v2.first + int64_t(v1.second) * v2.second;
}

pair<int, int> inv(pair<int, int> g) {
    int dx = -g.second, dy = g.first;


    if (dy < 0)
    {
        dx *= -1;
        dy *= -1;
    }

    return {dx, dy};
}

void solution()
{
    pair<int, int> p1, p2, p3;
    cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second;

    if (p1 == p3 || p2 == p3 || p1 == p2) {
        cout << "DI TITIK YANG SAMA" << endl;
        return;
    }

    auto grad1 = normalize_frac(p1, p2);
    auto grad2 = normalize_frac(p2, p3);

    int64_t dx1 = p2.first - p1.first, dx2 = p3.first - p2.first;

    // cout << grad1.first << "/" << grad1.second << " " << grad2.first << "/" << grad2.second << " " << dx1 << " " << dx2 << endl;


    if (grad1 == grad2)
    {
        if (dx1 * dx2 >= 0) {
            cout << "KE DEPAN" << endl;
        } else {
            cout << "KE BELAKANG" << endl;
        }
    }
    else
    {
        if (dx1 * dx2 >= 0) {
            cout << "KE KIRI" << endl;
        } else {
            cout << "KE KANAN" << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}