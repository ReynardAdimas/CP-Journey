#include <iostream>
#include <vector>
#include <algorithm>

// Fungsi untuk menyusun larik-larik menjadi satu baris dasar leksikografis minimum
std::vector<int> lexicographicallyMinimumStacking(const std::vector<std::vector<int>>& arrays) {
    std::vector<int> baseRow;

    // Langkah 1: Gabungkan semua elemen ke dalam satu vektor
    for (const auto& arr : arrays) {
        for (int element : arr) {
            baseRow.push_back(element);
        }
    }

    // Langkah 2: Urutkan vektor untuk mendapatkan susunan leksikografis minimum
    // Proses ini secara otomatis menempatkan angka-angka terkecil di depan,
    // yang setara dengan konsep "gravitasi" dan penempatan dari kiri ke kanan.
    std::sort(baseRow.begin(), baseRow.end());

    return baseRow;
}

int main() {
    // Contoh dari "test case 4"
    std::vector<std::vector<int>> inputArrays = {
        {4, 7, 2},
        {4, 6, 4},
        {9, 5, 5},
        {4, 1},
        {3},
        {2},
        {1}
    };

    std::vector<int> result = lexicographicallyMinimumStacking(inputArrays);

    // Menampilkan hasil
    std::cout << "Hasil susunan leksikografis minimum: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}