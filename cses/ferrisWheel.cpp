#include<bits/stdc++.h>
using namespace std; 
 
const int maks = 2e5;
int n,x,p[maks],cnt=0;
bool cek[maks];
void solution()
{
    cin >> n >> x; 
    for(int i=0;i<n;i++) cin >> p[i];
    sort(p,p+n, greater<int>());
    int i=0;
    int j = n-1;
    while(i<j)
    {
        if((p[i]+p[j]) > x)
        {
           
            --j;
        }
        else 
        {
            ++cnt; 
            cek[i] = cek[j] = true;
            ++i; 
            --j;
        }
    }
    for(int i=0;i<n;i++)
    {
        cnt += cek[i] == false;
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
