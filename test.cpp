#include <bits/stdc++.h>
using namespace std; 

void solution()
{
    string s; 
    cin >> s; 
    vector<int> v;
    int cnt = 1;  // Mulai dari 1 karena karakter pertama sudah dihitung

    for(int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            cnt++; 
        }
        else 
        {
            v.push_back(cnt);
            cnt = 1; // Reset cnt ke 1 untuk karakter baru
        }
    }
    v.push_back(cnt); // Masukkan jumlah terakhir ke dalam v

    for(int num : v)
    {
        cout << num << endl;  // Gunakan endl untuk format sesuai permintaan
    } 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}
