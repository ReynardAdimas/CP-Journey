#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int m; 
   cin >> m; 
   int a,b,c; 
   cin >> a >> b >> c; 
   int count = 0; 
   int rem = 0;
   // cara memaksimalkan slot
   count += min(m,a);
   rem += m-min(m,a);
   count += min(m,b);
   rem+= m-min(m,b);
   count+=min(rem,c);
   cout << count << endl;
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