#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        //solution();
        int n, k; 
        cin >> n >> k; 
        vector<int> v(n); 
        map<int, int> total; 
        for (int i = 0; i < n; i++)
        {
            cin >>v[i]; 
            total[v[i]]++;
        } 
   
        bool pos = 1; 
        map<int, int> target; 
        for(auto [val,cnt] : total)
        {
            if(cnt%k != 0)
            {
                pos =0; 
                break;
            }
            target[val] = cnt/k;
        }
        if(!pos) 
        {
            cout << 0 << '\n';
            continue; 
        }  
        ll awesome = 0; 
        int l=0;     
        map<int, int> curr; 
        for(int i=0;i<n;i++)
        {
            curr[v[i]]++; 
            while(curr[v[i]] > target[v[i]])
            {
                curr[v[l]]--; 
                l++;
            }
            awesome = awesome + (i-l+1);
        }
        cout << awesome << '\n';
    }

    return 0;
}