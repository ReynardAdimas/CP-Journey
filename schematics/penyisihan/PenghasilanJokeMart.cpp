#include<bits/stdc++.h>
#include<locale>
#define  ll long double
using namespace std;

void solution()
{
    cout.imbue(locale("id_ID.UTF-8"));
   ll m,n,o,p;
   cin >> m >> n >> o >> p;
   ll avg = (m+n+o+p)/4; 
   cout << "Rp " << fixed << setprecision(2) << avg << "\n";
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