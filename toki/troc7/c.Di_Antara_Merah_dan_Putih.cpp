#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n; 
    vector<int> m(n);
    vector<int> p(n);
    vector<int> g(n);
    int sum1=0, sum2=0,sum3=0;
    for(int i=0;i<n;i++)
    {
        cin >> m[i]; 
        sum1+=m[i];
    }  
    for(int i=0;i<n;i++)
    {
        cin >> p[i];
        sum3+=p[i];
    } 
    g = m;
    for(int i=0;i<n;i++)
    {
        if(g[i] < p[i])
        {
            g[i] = g[i] +1;
            break;
        }
    } 
    for(auto x:g) sum2+=x;
    if(sum1 < sum2 && sum2 < sum3)
    {
        for(auto x:g)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    else 
    {
        cout << -1 << "\n";
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