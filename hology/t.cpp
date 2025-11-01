#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Fungsi untuk memeriksa apakah koordinat (x, y) valid dan belum dikunjungi
bool isSafe(int x, int y, int n, int m, const vector<vector<int>>& board) {
    return (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == -1);
}

// Menghitung jumlah gerakan yang mungkin dari sebuah kotak (digunakan oleh aturan Warnsdorff)
int getDegree(int x, int y, int n, int m, const vector<vector<int>>& board, const vector<int>& xMoves, const vector<int>& yMoves) {
    int count = 0;
    for (int i = 0; i < 8; ++i) {
        if (isSafe(x + xMoves[i], y + yMoves[i], n, m, board)) {
            count++;
        }
    }
    return count;
}

// Fungsi utama untuk menyelesaikan Knight's Tour
bool solveKnightsTour(int n, int m, int start_r, int start_c) {
    vector<vector<int>> board(n, vector<int>(m, -1));

    // Definisi gerakan kuda
    vector<int> xMoves = {2, 1, -1, -2, -2, -1, 1, 2};
    vector<int> yMoves = {1, 2, 2, 1, -1, -2, -2, -1};

    // Posisi awal kuda
    int currX = start_r;
    int currY = start_c;
    board[currX][currY] = 0; // Langkah ke-0

    // Melakukan N * M - 1 langkah
    for (int moveCount = 1; moveCount < n * m; ++moveCount) {
        int min_deg_idx = -1;
        int min_deg = 9; // Derajat maksimum adalah 8
        int nextX, nextY;

        // Aturan Warnsdorff: Cari langkah berikutnya dengan derajat (gerakan keluar) minimum
        for (int k = 0; k < 8; ++k) {
            nextX = currX + xMoves[k];
            nextY = currY + yMoves[k];

            if (isSafe(nextX, nextY, n, m, board)) {
                int c = getDegree(nextX, nextY, n, m, board, xMoves, yMoves);
                if (c < min_deg) {
                    min_deg_idx = k;
                    min_deg = c;
                }
            }
        }

        // Jika tidak ada langkah yang mungkin, tur gagal
        if (min_deg_idx == -1) {
            return false;
        }

        // Lakukan gerakan
        currX += xMoves[min_deg_idx];
        currY += yMoves[min_deg_idx];
        board[currX][currY] = moveCount;
    }

    // Setelah semua kotak dikunjungi, periksa apakah ini adalah tur tertutup
    // Yaitu, apakah kuda bisa melompat kembali ke posisi awal
    bool canCloseTour = false;
    for (int i = 0; i < 8; ++i) {
        if ((currX + xMoves[i] == start_r) && (currY + yMoves[i] == start_c)) {
            canCloseTour = true;
            break;
        }
    }

    if (!canCloseTour) {
        return false; // Bukan tur tertutup
    }

    // Jika berhasil, cetak papan solusinya
    cout << "YES" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(3) << board[i][j];
        }
        cout << endl;
    }

    return true;
}

int main() {
    int n, m, r, c;
    
    // Contoh input: 6 6 0 0
    cin >> n >> m >> r >> c;

    if (!solveKnightsTour(n, m, r, c)) {
        cout << "NO" << endl;
    }

    return 0;
}