#include<bits/stdc++.h>
#define ll long long
using namespace std; 

ll boredom(vector<int>& v)
{
    if(v.empty()) return 0; 

    map<int, ll> freq; 
    int maksNum=0;

    // hitung jumlah setiap angka
    for(int i:v)
    {
        freq[i]++;
        maksNum = max(maksNum, i);
    }  

    // dp
    vector<ll> dp(maksNum+1,0); 
    dp[1] = freq[1]*1; 

    // isi dp 
    for(int i=2;i<=maksNum;i++)
    {
        dp[i] = max(dp[i-1], dp[i-2]+freq[i]*i);
    }

    return dp[maksNum];

}

void solution()
{
    int n; 
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i]; 
    cout << boredom(v) << endl;
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