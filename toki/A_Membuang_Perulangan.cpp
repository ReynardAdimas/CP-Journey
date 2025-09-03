#include<bits/stdc++.h>
using namespace std; 

unordered_map<int, bool> d;
vector<int> v;
void solution()
{
   int n; 
   cin >> n;
   for(int i=0;i<n;i++)
   {
        int a; 
        cin >> a; 
        if(d[a]==false)
        {
            d[a]=true;
            v.push_back(a);
        }
   } 
   for(auto i:v)
   {
    cout << i << endl;
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