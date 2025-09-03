#include<bits/stdc++.h>
using namespace std; 

void solution()
{
   int n; 
   cin >> n; 
   string a[n]; 
   string bin; 
   cin >> bin; 
   for(int i=0;i<n;i++)
   {
     string temp = bin; 
     if(temp[i]=='0')
     {
        temp[i] = '1';
        a[i] = temp;
     }
     else 
     {
        temp[i] = '0';
        a[i] = temp;
     } 
     
   } 
   int count = 0;
   string jadi = "";
   for(int i=0;i<n;i++)
   {
    jadi += a[i];
   } 
   for(int i=0;i<jadi.length();i++)
   {
    if(jadi[i]=='1')
    {
        count++;
    }
   }
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