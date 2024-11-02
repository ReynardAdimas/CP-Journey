#include <bits/stdc++.h>
using namespace std;
void generateSubarrays(int arr[], int subarray[], int n, int index, int subIndex) {
    // Cetak subarray saat ini jika tidak kosong
    if (subIndex > 0) {
        for (int i = 0; i < subIndex; i++) {
            sort(subarray, subarray+n);
            cout << subarray[0]+1 << " ";
        }
    }

    // Rekursif untuk setiap elemen berikutnya di array
    for (int i = index; i < n; i++) {
        // Tambahkan elemen saat ini ke subarray
        subarray[subIndex] = arr[i];
        // Rekursif dengan elemen yang baru ditambahkan
        generateSubarrays(arr, subarray, n, i + 1, subIndex + 1);
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int subarray[n]; // Array sementara untuk menampung subarray
    generateSubarrays(arr, subarray, n, 0, 0);
    return 0;
}
