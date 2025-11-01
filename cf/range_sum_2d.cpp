#include<bits/stdc++.h>
using namespace std;
 
constexpr int max_side = 1000; 
int tree_pref[max_side+1][max_side+1]; 
int forest[max_side+1][max_side+1]; 
 
void solution()
{
   int n,m,q;
   cin >> n  >> m >> q; 
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        char a; 
        cin >> forest[i+1][j+1];
    }
   } 
 
   // build prefix sum 
   for(int i=1;i<=n;i++)
   {
    for(int j=1;j<=m;j++)
    {
        // tree_pref[i][j] = forest[i][j] + tree_pref[i-1][j] + tree_pref[i][j-1] - tree_pref[i-1][j-1];
        tree_pref[i][j] = tree_pref[i-1][j] + tree_pref[i][j-1] - tree_pref[i-1][j-1] + forest[i][j]; 
    } 
   }
   
   for(int i=0;i<q;i++)
   {
    int kolomAwal, kolomTujuan, barisAwal, barisTujuan; 
    cin >> kolomAwal >> barisAwal >> kolomTujuan >> barisTujuan; 
    cout << tree_pref[kolomTujuan][barisTujuan] - tree_pref[kolomAwal-1][barisTujuan] - tree_pref[kolomTujuan][barisAwal-1] + tree_pref[kolomAwal-1][barisAwal-1] << '\n'; 
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