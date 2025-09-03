#include<bits/stdc++.h>
using namespace std;

void solution()
{
   int a[3]; 
   for(int i=0;i<3;i++)
   {
    cin >> a[i];
   }
   sort(a,a+3); 
   if(a[0] > 1)
   {

       if((a[0]==a[1]) && a[2] - a[0] == 1) 
       {
        cout << "Ya" << endl;
       }
       else 
       {
        cout << "Tidak" << endl;
       }
   }
   else 
   {
    cout << "Tidak" << endl;
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