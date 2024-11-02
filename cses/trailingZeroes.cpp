#include<bits/stdc++.h>
using namespace std; 

long long factmod(long long n, int p) {
    vector<int> f(p);
    f[0] = 1;
    for (int i = 1; i < p; i++)
        f[i] = f[i-1] * i % p;

    long long res = 1;
    while (n > 1) {
        if ((n/p) % 2)
            res = p - res;
        res = res * f[n%p] % p;
        n /= p;
    }
    return res;
}

void solution()
{
    long long n;
    int ans = 0; 
    const int mod = 1e9 + 7;
    cin >> n; 
    n = factmod(n,mod);
    string s = to_string(n); 
    for(int i=0;i<s.size();i++)
    {
        int temp = 0;
        if(s[i]=='0')
        {
            int j = i; 
            while(s[j]=='0')
            {
                temp++;
                j++;
            } 
            ans = max(temp,ans);
        }
    } 
    cout << ans << endl;
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