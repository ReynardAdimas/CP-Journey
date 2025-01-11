#include<bits/stdc++.h>
using namespace std; 

int gcd(int a, int b)
{
    // cari minimum antara a dan b
    int res = min(a,b); 
    // Testing divisiblity with all numbers starting from
    // min(a, b) to 1 
    while(res > 1)
    {
        // jika ada angka yang bisa membagi a dan b, maka dapat jawabannya
        if(a%res == 0 && b%res==0) break; 
        res--;
    }
    return res;
}

// lebih cepat menggunakan template class __gcd(a,b)

void solution()
{
   int a,b; 
   cin >> a >> b; 
   cout << gcd(a,b) << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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