#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n; 
    cin >> n; 
    int year = n/365;
    n-=year*365; 
    int month = n/30; 
    n-=month*30; 
    cout << year << " years" << endl; 
    cout << month << " months" << endl; 
    cout << n << " days" << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}