#include<bits/stdc++.h>
using namespace std; 

const int MAX_VAL = 1e6;
int divisors[MAX_VAL+1];

void init()
{
    for(int i=1;i<=MAX_VAL;i++)
    {
        for(int j=i;j<=MAX_VAL;j+=i)
        {
            divisors[j]++;
        }
    }
}

void solution()
{
    int n; 
    cin >> n; 
    cout << divisors[n] << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    init(); // fungsi untuk mencari jumlah pembagi tiap bilangan
    while(t--)
    {
        solution();
    }
    return 0;
}