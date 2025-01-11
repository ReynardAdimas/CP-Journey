// There are N
//  items numbered from 1 to N
// . The ith
//  item has a weight of wi
//  and a value of vi
// .

// You have to choose some items out of the N
//  items and carry them home in a knapsack. The capacity of the knapsack is W
//  which donate the maximum weight that can be carried inside the knapsack. In other words, W
//  means the total summation of all weights of items that can be carried in the knapsack.

// Print maximum possible sum of values of items that you can take home.

// Note: Solve this problem using recursion.

// Input
// First line contains two numbers N
//  and W
//  (1≤N≤20,1≤W≤100)
//  number of items and the capacity of the knapsack.

// Next N
//  lines will contain two numbers wi
//  and vi
//  (1≤wi≤50,1≤vi≤1000)

// Output
// Print maximum possible sum of values of items that you can take home.
#include<bits/stdc++.h>
using namespace std; 

int knap(int kapasitas, int n, int w[], int v[])
{
    if(kapasitas <= 0 || n <= 0)
    {
        return 0;
    }
    if(w[n-1] > kapasitas)
    {
        return knap(kapasitas, n-1, w, v); // ga masukin barang
    }
    return max(knap(kapasitas, n-1, w, v), v[n-1]+knap(kapasitas-w[n-1], n-1, w, v)); // ambil maks antara ambil barang tersebut dengan tidak ambiil barang tersebut
}


void solution()
{
   int n, kapasitas; 
   cin >> n >> kapasitas; 
   int w[n]; 
   int v[n]; 
   for(int i=0;i<n;i++)
   {
        cin >> w[i];
        cin >> v[i];
   }
   cout << knap(kapasitas, n, w, v) << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    int t;
    t = 1;
    //cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}