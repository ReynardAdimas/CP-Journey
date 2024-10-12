#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int a, sum = 0;
    for(long long i=0;i<7;i++)
    {
        int a;
        cin >> a; 
        if(i>0) a = abs(a); 
        sum+=a;
    }
    cout << sum << endl;
} 
// Rules 
    // membagi bebek menjadi N kelompok 
    // masing-masing kelompok membungkus parsel dengan ukuran/jumlah tertentu 
    // kelompok a1 telur...dst 
    // suplai telur tiap kelompok sama yaitu X telur  
    // kalau sisa dikembalikan 
    // Pesanan adalah M buah parsel 
    // berapa banyak kemungkinan nilai X total parsel yang dihasilkan semua kelompok berjumlah M 

    // Input 
    // N, banyak kelompok 
    // M, jumlah parsel yang dipesan 
    // ai-an, jumlah telur pada parsel yang dihasilkan kelompok i 

    // output 
    // kemungkinan nilai X yang bisa dipilih agar dihasilkan semua kelompok berjumlah M 

    // cth 
    // input 
    // 3 10
    // 4 6 8
    // output 4 
    // 20/4 = 5 4 
    // 20/6 = 3 3
    // 20/8 = 2 2
    // x/4 + x/6 + x/6 = 9 
    // x/4 + x/6 + x/6 = 11 
    // 13x/24 = 9 
    // 13x/24 = 11 
    // 13x = 216 --> x = 16 
    // 13x = 264 --> x = 20 