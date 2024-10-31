#include<bits/stdc++.h>
using namespace std; 

const int maks = 2e5;
int n,x,p[maks],cnt=0,p1[maks];
void solution()
{
    cin >> n >> x; 
    for(int i=0;i<n;i++) cin >> p[i];
    for(int i=0;i<n;i++) p1[i] = p[i];
    sort(p,p+n, greater<int>());
    sort(p1,p1+n);
    int i=0;
    while(i<n)
    {
        if((p[i]+p1[i]) <= x)
        {
           
            cnt++; 
            i+=2;
        }
        else 
        {
            if(p[i] <= x)
            {
               
                cnt++; 
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