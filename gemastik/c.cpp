#include<bits/stdc++.h>
using namespace std; 
int n,p,q; 
int coin; 

int main()
{
   cin >> n >> p >> q; 
   coin = 0 ;
   int a[n];
   for(int i=0;i<n;i++) cin >> a[i]; 
   for(int i=0;i<n;i++)
   {
        while(a[i] > 0)
        {
            if(a[i]%2==0)
            {
                coin+=p; 
                a[i]/=2;
                cout << "bom besar" << endl;
            }
            if(a[i]%3==0)
            {
                coin+=q;
                a[i] = (a[i]*2)/3;
                cout << "bom kecil" << endl;
            }
            if(a[i]%2!=0 && a[i]%3!=0)
            {
                coin++; 
                a[i]-=1;
                cout << "senapoan" << endl;
            }
        }
        cout << coin << endl;
   } 
}