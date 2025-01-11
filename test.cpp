#include<bits/stdc++.h>
using namespace std; 

// Fungsi untuk menghitung GCD dari dua bilangan
int gcd(int a, int b) {
    if(a == 0) return b; 
    return gcd(b % a, a);
}

// Fungsi untuk menemukan GCD dari seluruh elemen array
int findGcd(int arr[], int n) {
    int result = arr[0]; 
    for(int i = 1; i < n; i++) {
        result = gcd(arr[i], result);
        if(result == 1) return 1; // GCD 1 berarti tidak ada faktor persekutuan kecuali 1
    }
    return result;
}

// Fungsi untuk mencari semua common divisors dari hasil GCD
vector<int> findCommonDivisors(int gcdValue) {
    vector<int> divisors;
    for(int i = 1; i * i <= gcdValue; i++) {
        if(gcdValue % i == 0) {
            divisors.push_back(i); // Tambahkan faktor
            if(i != gcdValue / i) 
                divisors.push_back(gcdValue / i); // Tambahkan pasangan faktor jika berbeda
        }
    }
    sort(divisors.begin(), divisors.end()); // Urutkan hasil
    return divisors;
}

void solution() {
    int n; 
    cin >> n; 
    int arr[n]; 
    for(int i = 0; i < n; i++) cin >> arr[i]; 
    
    // Cari GCD dari array
    int gcdValue = findGcd(arr, n);
    
    // Cari semua faktor persekutuan (common divisors)
    vector<int> divisors = findCommonDivisors(gcdValue);
    
    // Output semua common divisors
    for(int d : divisors) {
        cout << d << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    
    int t;
    t = 1; // Ubah menjadi `cin >> t` jika ada beberapa test case
    while(t--) {
        solution();
    }
    return 0;
}
