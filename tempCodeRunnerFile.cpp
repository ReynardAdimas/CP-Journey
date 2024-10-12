#include<bits/stdc++.h>
using namespace std;

int f(int a, int b)
{
    if(b==0) return 1; 
    int res = f(a,b/2); 
    if(b%2) return res*res*a; 
    else return res*res;
}

int main()
{
    int a,b,c,n; 
    int hasil1 = f(b,c); 
    int hasil2 = f(a,hasil1); 
    int hasil3 = hasil2%n; 
    cout << hasil3+1 << endl;
}