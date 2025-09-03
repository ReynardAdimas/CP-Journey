#include <iostream>
using namespace std;

int main() {
    int luas[5];
    for(int i=0;i<5;i++)
    {
        int p,l; 
        cin >> p >> l; 
        luas[i] = p*l;
    }
    int terbesar = luas[0];
    for (int i = 1; i < 5; i++) {
        if (luas[i] > terbesar) {
            terbesar = luas[i];
        }
    }
    cout << terbesar << endl;
}
