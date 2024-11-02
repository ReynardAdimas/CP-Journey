#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    long long sum = 0;
    long long sum1 = 0; 
    long long n; 
    cin >> n; 
    if(n==1) cout << "NO" << endl;
    else 
    {
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        if(sum%2!=0) cout << "NO" << endl;
        else 
        {  
            cout << "YES" << endl; 
            vector<int> set1,set2; 
            vector<int> vis(n+1,0); 
            sum1 = 0; 
            while(sum1 < (sum/2))
            {
                long long  sisa = (sum/2)-sum1; 
                if(sisa > n)
                {
                    set1.push_back(n); 
                    vis[n] = 1;
                    sum1 += n;
                    n--;
                }
                else 
                {
                    set1.push_back(sisa) ;
                    vis[sisa] = 1; 
                    sum1 = (sum/2);
                }
            } 
            for(int i=1;i<=n;i++)
            {
                if(vis[i]==0)
                {
                    set2.push_back(i);
                }
            } 
            cout << set1.size() << endl;
            for(auto x:set1)
            {
                cout << x << " ";
            }
            cout << endl;
            cout << set2.size() << endl;
            for(auto x:set2)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
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