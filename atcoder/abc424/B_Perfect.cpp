#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n, m,k; 
   cin >> n >> m >> k;
   vector<set<int>> selesai(n+1); 
   vector<int> menang; 
   set<int> submit;
   for(int i=0;i<k;i++)
   {
    int a,b; 
    cin >> a >> b; 
    selesai[a].insert(b); 
    if(selesai[a].size() == m and submit.find(a) == submit.end())
    {
        menang.push_back(a); 
        submit.insert(a);
    }
   }  
   for(int i=0;i<menang.size();i++)
   {
    cout << menang[i] << (i==menang.size() -1? "" : " ");
   }
   cout << endl;

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