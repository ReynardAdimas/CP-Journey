#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n,k,sum=0; 
    cin >> n >> k;
    vector<int> v(n); 
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        // sum+=v[i];
    }  
    for(int i=0;i<k;i++)
    {
        sum+=v[i];
    }
    int bestSum = sum; 
    int bestIndex = 0; 
    for(int i=k;i<n;++i)
    {
        sum-=v[i-k];
        sum+=v[i]; 
        if(bestSum > sum)
        {
            bestSum = sum; 
            bestIndex = i-k+1;
        } 

    }
    cout << bestIndex+1 << "\n";

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