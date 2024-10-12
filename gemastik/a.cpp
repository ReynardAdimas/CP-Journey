#include<bits/stdc++.h>
using namespace std; 

long long l,n,potong; 
vector<long long> arr; 
vector<long long> indexKe; 
vector<long long> hasil;

int main()
{
    cin >> n >> l; 
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    } 
    // bagi 2 dengan arr[0]
    // hasil potongan dimasukkan ke vector 
    for(int i=0;i<n;i++)
    {
        potong = 0; 
        potong += arr[i]; 
        indexKe.push_back(potong);
    }    
    hasil.push_back(l/2);
    hasil.push_back(l/2); 
    n-=1;
    while(n--)
    {
        int i=1;
        int temp;
        temp = hasil[indexKe[i]]/2;
        hasil.push_back(temp);
        i++; 
    }
    for(auto x:hasil)
    {
        cout << x << " " << endl;
    }
    return 0;
}