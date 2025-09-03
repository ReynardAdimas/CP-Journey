#include<bits/stdc++.h>
using namespace std; 

struct item {
    double value, weight;
    double hargaPerKilo() const {
        return value/weight;
    } 

}; 

bool cmp(item a, item b)
{
    return a.hargaPerKilo() > b.hargaPerKilo();
}

void solution()
{
   int n;
   double x; 
   cin >> n >> x; 
    vector<item> barang(n); 
    for(int i=0;i<n;i++) cin >> barang[i].weight;
    for(int i=0;i<n;i++) cin >> barang[i].value; 

    sort(barang.begin(), barang.end(), cmp);

    double total = 0; 
    for(int i=0;i<n && x > 0;++i)
    {
        float ambil = min(barang[i].weight, x); 
        total += ambil * barang[i].hargaPerKilo(); 
        x -= ambil;
    }
    cout << fixed << setprecision(5) << total << endl;
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