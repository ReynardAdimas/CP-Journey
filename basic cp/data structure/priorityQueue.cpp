#include<bits/stdc++.h>
using namespace std; 

// heap / priority queue 
priority_queue<int> pq;

int main()
{
    pq.push(5); 
    pq.push(2); 
    pq.push(10); 
    cout << pq.top() << endl; // selalu mengeluarkan data int paling besar 
    cout << pq.pop() << endl; // selalu menghapus elemen int terbesar 

    // tapi jika ingin merubah prioritas menjadi bilangan paling kecil 
    priority_queue<int, vector<int>, greater<int> > PQ; 
    pq.push(5); 
    pq.push(2); 
    pq.push(10); 
    cout << pq.top() << endl; // selalu mengeluarkan data int paling kecil 
    cout << pq.pop() << endl; // selalu menghapus elemen int terkecil 
}