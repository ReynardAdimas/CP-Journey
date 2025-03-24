#include<iostream> 
using namespace std; 
void hanoi(int n, char asal, char tujuan, char lewat)
{
    if(n==0) return; 
    hanoi(n-1, asal, lewat, tujuan); 
    cout << "Gerak ke tower " << n << " dari tower " <<  asal << " ke tower " << tujuan << endl;
    hanoi(n-1, lewat, tujuan, asal);
}

int main()
{
    int t=3; char a,b,c; 
    cout << "Masukkan tower pertama : "; cin >> a;
    cout << "Masukkan tower kedua : "; cin >> b;
    cout << "Masukkan tower ketiga : "; cin >> c; 
    hanoi(t, a,b,c); 
    return 0;
}