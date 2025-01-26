#include<bits/stdc++.h>
#define ll long long
using namespace std; 

ll exp(ll a, ll b)
{
    ll result = 1;
    for(int i=1;i<=b;i++)
    {
        result *= a;
    }
    return result;
}

string bin(long long n)
{
    string result = ""; 
    bool start = false; 
    for(int i=63;i>=0;i--)
    {
        if(n & (1LL << i))
        {
            result += '1';
            start = true;
        }
        else if(start)
        {
            result += '0';
        }
    } 
    return result.empty() ? "0" : result;
}

void solution()
{
    ll b,k,diff; 
    cin >> b >> k; 
    diff = k-b; 
    vector<ll> pemberat; 
    // iterasi dari bit tertinggi ke terendah, cek tiap bit
    for(int i=60; i>= 0;i--)
    {
        // cek apakah bit bernilai 1 ada pada diff
        if(diff & (1LL << i))
        {
            // menambahkan 2^k pada pemberat, 1LL << k --> 2^k
            pemberat.push_back(1LL << i);
        }
    }
    for(ll w:pemberat)
    {
        cout << w << endl;
    }
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