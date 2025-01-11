#include <bits/stdc++.h>
using namespace std;

void make_move(int start, int helper, int end, int count) {
    // kalo tinggal 1 cakram maka langsung dipindahkan dari left ke end
    if (count == 1) {
        cout << start << " " << end << endl;
        return;
    }
    make_move(start, end, helper, count - 1); // mindahin cakram dari kiri ke mid dengan bantuan tiang kanan
    cout << start << " " << end << endl;
    make_move(helper, start, end, count - 1); // mindahin cakram dari tengah ke kanan dengan bantuan tiang mid
}

int main () {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl; // menggeser bit biner angka 1 sebanyak n posisi atau sama dengan 2^n - 1
    make_move(1, 2, 3, n);
}