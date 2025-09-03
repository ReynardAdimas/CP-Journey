#include<bits/stdc++.h>

using namespace std;

void solution()
{
   int n,k; 
   cin >> n >> k; 
   vector<pair<int,int>> a(n); 
   for(int i=0;i<n;i++)
   {
    int t;
     cin >> t; 
     a[i] = {t, i+1};
   }
   sort(a.begin(), a.end(), [](pair<int,int>& x, pair<int,int>& y){
    if(x.first == y.first)
    {
        return x.second < y.second;
    } 
    return x.first > y.first;
   }
); 

for(int i=0;i<k && i<n;i++)
{
    cout << a[i].second << " ";
}
cout << endl; 

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