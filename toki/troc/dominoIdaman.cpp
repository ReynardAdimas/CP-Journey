#include<bits/stdc++.h>
using namespace std; 

long long pangkat(int a, int p)
{
    long long hasil = 1;
    for(int i=0;i<p;i++)
    {
        hasil*=a;
        hasil%=998244353;
    } 
    return hasil;
}


int main() 
{
    int n,m; 
    cin >> n >> m; 
    long long count = pangkat(2, n*m-1);
    cout << count << endl;
}