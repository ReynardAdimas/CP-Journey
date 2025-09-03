#include<bits/stdc++.h>
using namespace std; 

struct act{
    int start; 
    int duration;
    int finish;
};

bool cmp(act a, act b)
{
    return a.finish < b.finish;
}

int activity(vector<act> &a, int sz)
{
    sort(a.begin(), a.end(), cmp); 
    int selectedCount = 0; 
    int startTime = 0; 
    for(int i=0;i<sz;i++)
    {
        if(a[i].start>=startTime)
        {
            selectedCount++; 
            startTime=a[i].finish;
        }
    }
    return selectedCount;
}

void solution()
{
   int n; 
   cin >> n; 
   vector<act> v(n); 
   for(int i=0;i<n;i++)
   {
    cin >> v[i].start >> v[i].duration; 
    v[i].finish = v[i].start + v[i].duration;
   }
   int hasil = activity(v,n); 
   cout << hasil << endl;
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