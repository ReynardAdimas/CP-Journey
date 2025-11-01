#include<bits/stdc++.h>
#define int long long
using namespace std;

void solution()
{
    int n;
    cin >> n;
    int l[n];
    int r[n];

    for(int i = 0; i<n ; i++){
        cin >> l[i];
    }

    for(int i = 0; i<n ; i++){
        cin >> r[i];
    }

    int detik = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = l[i] + r[i];
        if(l[i] == 0){
            cout << -1 << endl;
            return;
        }
        if((detik+temp) % (temp) < l[i]){
            detik++;
        }else{
            detik += abs((temp) - ((detik+temp) % (temp))) + 1;
        }
    }
    cout << detik << endl;
}

signed main()
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