#include<bits/stdc++.h>
using namespace std;

int start_prev = 0; 
int end_prev = 0;
int ans = 0;
void solution()
{
   int n; 
   cin >> n; 
   for(int i=0;i<n;i++)
   {
    int start,end; 
    cin >> start >> end; 
    if(start_prev < start && end_prev < end)
    {
        ans++;
    }
    start_prev = start; 
    end_prev = end;
   }
   cout << ans << endl;
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