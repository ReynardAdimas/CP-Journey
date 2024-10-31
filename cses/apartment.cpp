#include<bits/stdc++.h>
using namespace std; 

const int maks = 2e5;
int n,m,k, a[maks], b[maks], cnt;

void solution()
{
    cin >> n >> m >> k;
    for(int i=0;i<n;i++) cin >> a[i]; 
    for(int i=0;i<m;i++) cin >> b[i]; 
    sort(a,a+n); 
    sort(b,b+m); 
    int i=0; 
    int j=0; 
    while(i<n && j<m)
    {
        if(abs(a[i]-b[j]) <= k)
        {
            i++;
            j++;
            cnt++;
        }
        else
        {
            if(a[i]-b[j] > k)
            {
                j++;
            }
            else 
            {
                i++;
            }
        } 
    } 
    cout << cnt << endl;
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