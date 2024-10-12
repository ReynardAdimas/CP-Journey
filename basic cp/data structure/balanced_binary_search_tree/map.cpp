#include<bits/stdc++.h>
using namespace std; 

map<int, int> A; // --> binary search tree
// kompleksitas : O(log N)
int main()
{
  // contoh kasus menyimpan umur orang dan namanya 
  // ide : nama sebagai index, umur sebagai value 
  map<string, int> data; 
    int n; 
    cin >> n; 
    for(int i=0;i<n;i++)
    {
        string nama; 
        int umur; 
        cin >> nama >> umur; 
        data[nama] = umur;
    } 

    // print all element 
    for(auto x:data)
    {
        cout << x.first << " " << x.second << endl;
    }
}