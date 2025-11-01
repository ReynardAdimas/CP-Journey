#include<bits/stdc++.h>
using namespace std;

map<char, int> mp;
int poin = 0;

void cariin(char s2)
{
    auto it = mp.find(s2); 
    if(it != mp.end() && it->second > 0)
    {
        poin++; 
        it->second--;
    }
    
}
void solution()
{
    mp.clear();
   /*
   2 baris, setiap baris ada  N kartu 
   kartu ke-i di baris 1 & 2 diadu 
   dapet poin : 
   -baris 1 G, baris 2 K 
   - baris 1 B, baris 2 G 
   - baris 1 K, baris 2 B 
   baris ke 2 boleh diubah urutan barisnya
    */ 
    int n; 
    cin >> n; 
    string s1; 
    cin >> s1; 
    for(int i=0;i<n;i++)
    {
        char a; 
        cin >> a; 
        mp[a]++;
    } 
 
    int sz = s1.length(); 
    for(int i=0;i<sz;i++)
    {
        char cari;
        if(s1[i]=='G')
        {
            cari = 'K'; 
            cariin(cari);
        }
        else if(s1[i]=='B')
        {
            cari = 'G'; 
            cariin(cari);
        }
        else if(s1[i]=='K')
        {
            cari = 'B'; 
            cariin(cari);
        }
    }
    cout << poin << '\n';
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