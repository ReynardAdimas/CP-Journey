#include<iostream> 
using namespace std; 

int fib(int n)
{
    if(n==0 || n==1) return 1; 
    return fib(n-1)+fib(n-2);
} 

int fak(int n)
{
    if(n==0 || n==1) return 1; 
    return n*fak(n-1);
}

void hanoi(int n, char asal, char tujuan, char lewat)
{
    if(n==0) return; 
    hanoi(n-1, asal, lewat, tujuan); 
    cout << "Gerak ke tower " << n << " dari tower " <<  asal << " ke tower " << tujuan << endl;
    hanoi(n-1, lewat, tujuan, asal);
}

int main()
{
    // fibonacci
    int n; 
    cout << "Masukkan angka : "; cin >> n; 
    cout << "Deret Fibo ke- " << n << " = " << fib(n) << endl; 

    // faktorial 
    int m; 
    cout << "Masukkan angka : "; cin >> m; 
    cout << m << "! = " << fak(m) << endl; 

    // tower of hanoi 
    int t=3; char a,b,c; 
    cout << "Masukkan tower pertama : "; cin >> a;
    cout << "Masukkan tower kedua : "; cin >> b;
    cout << "Masukkan tower ketiga : "; cin >> c; 
    hanoi(t, a,b,c); 
    return 0;
}