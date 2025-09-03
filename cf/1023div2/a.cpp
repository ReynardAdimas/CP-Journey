#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int n; 
   cin >> n; 
   vector<int> v(n); 
   for(int i=0;i<n;i++)
   {
    cin >> v[i];
   } 
   int maks = *max_element(v.begin(), v.end()); 
   int mins = *min_element(v.begin(), v.end()); 

   if(mins == maks)
   {
    cout << "No" << endl;
   }
   else 
   { 
    cout << "Yes"<< endl;
    int ans;
    for(int i=0;i<n;i++)
    {
        if(v[i]==mins)
        {
            ans = 2;
        }
        if(v[i]==maks)
        {
            ans = 1;
        } 
           cout << ans << " ";
    } 
    cout << endl;
 
   }
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