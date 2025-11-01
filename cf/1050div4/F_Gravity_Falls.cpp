#include<bits/stdc++.h>
using namespace std;

vector<int> gravityStacking(const std::vector<std::vector<int>>& arrays) {
    std::vector<int> baseRow;
    
    // Iterasi melalui setiap tumpukan (kolom) dan tambahkan elemennya ke baris dasar.
    // Ini mensimulasikan "tetesan" dari setiap kolom ke dalam baris dasar yang sama.
    for (const auto& arr : arrays) {
        // Gunakan insert untuk menambahkan semua elemen dari arr ke akhir baseRow
        baseRow.insert(baseRow.end(), arr.begin(), arr.end());
    }
    
    return baseRow;
}

void solution()
{
   int n; 
   cin >> n; 
   vector<vector<int>> v(n);
   for(int i=0;i<n;i++)
   {
    int k;
    cin >> k; 
    for(int j=0;j<k;j++)
    {
        int x; 
        cin >> x; 
        v[i].push_back(x);
    }
   }
   vector<int> ans = gravityStacking(v); 
   for(auto i : ans)
   {
    cout << i << " ";
   }
   cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }

    return 0;
}