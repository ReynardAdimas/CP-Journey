#include<bits/stdc++.h>
using namespace std;

vector<int> lex(vector<vector<int>>& a)
{
    vector<int> baseRow; 
    for(auto i:a)
    {
        for(int e:i)
        {
            baseRow.push_back(e);
        }
    } 
    sort(baseRow.begin(), baseRow.end()); 
    return baseRow;
}

void solution()
{
   int n; 
   cin >> n; 
   vector<vector<int>> v(n);
   for(int i=0;i<n;i++)
   {
    int k;
    cin >> k; 
    for(int j=0;j<k;j++)
    {
        int x; 
        cin >> x; 
        v[i].push_back(x);
    }
   }
   vector<int> ans = lex(v); 
   for(auto i : ans)
   {
    cout << i << " ";
   }
   cout << '\n';
}

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
        solution();
    }

    return 0;
}