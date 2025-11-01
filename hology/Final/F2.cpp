#include <bits/stdc++.h>
using namespace std;

double dot(pair<int, int> v1, pair<int, int> v2) {
    return double(v1.first) * v2.first + double(v1.second) * v2.second;
}

double abs(pair<int, int> v) {
    return sqrt(dot(v, v));
}

double angle_cos(pair<int, int> v1, pair<int, int> v2) {
    return dot(v1, v2) / abs(v1) / abs(v2);
}   

void solution()
{
    pair<int, int> p1, p2, p3;
    cin >> p1.first >> p1.second >> p2.first >> p2.second >> p3.first >> p3.second;

    if (p1 == p3 || p2 == p3 || p1 == p2) {
        cout << "DI TITIK YANG SAMA" << endl;
        return;
    }

    double c1 = angle_cos({p2.first - p1.first, p2.second - p1.second}, {p3.first - p3.first, p3.second - p2.second});
    
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