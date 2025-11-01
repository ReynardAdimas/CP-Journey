#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod = 1e9 + 7;

bool alpha(int x)
{
    // return (x>=48 && x <= 122);
    return (x >= 48 && x <= 57) || (x >= 65 && x <= 90) || (x >= 97 && x <= 122);
}

void solution()
{
    string s;
    cin >> s;
    vector<ll> freq(10, 0);
    for (char c : s)
    {
        freq[c - '0']++;
    }

    ll jumlah = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (freq[i] == 0)
            continue;
        for (int j = 0; j <= 9; j++)
        {
            if (freq[j] == 0)
                continue;
            int n = i * 10 + j;
            if (alpha(n))
            {
                ll way;
                if (i != j)
                {
                    way = (freq[i] * freq[j]) % mod;
                }
                else
                {
                    way = (freq[i] * (freq[i] - 1)) % mod;
                }
                jumlah = (jumlah + way) % mod;
            }

            if (i == 1 && j <= 2)
            {
                for (int k = 0; k <= 9; k++)
                {
                    n = i * 100 + j * 10 + k;
                    if (alpha(n))
                    {
                        ll way;
                        
                        vector<ll> freq_2 = freq;
                        
                        way = freq_2[i];
                        freq_2[i]--;

                        way = (way * freq_2[j]) % mod;
                        freq_2[j]--;

                        way = (way * freq_2[k]) % mod;
                        freq_2[k]--;

                        jumlah = (jumlah + way) % mod;
                    }
                }
            }
        }
    }
    cout << jumlah << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    // t = 1;
    cin >> t;
    while (t--)
    {
        solution();
    }

    return 0;
}