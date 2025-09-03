#include <iostream>
#include <string>
#include <algorithm> // untuk reverse()

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    string result = "";
    while (n > 0) {
        int remainder = n % x;
        result += (remainder + '0'); // konversi angka ke karakter
        n /= x;
    }
    
    reverse(result.begin(), result.end());
    cout << result << endl;
    
    return 0;
}
