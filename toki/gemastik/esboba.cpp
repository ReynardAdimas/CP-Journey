#include<bits/stdc++.h>
using namespace std; 
#define ll long long
int main()
{
    ll n,sum=0,min=INT_MAX, max=0, imin = INT_MAX, imax=0; 
    cin >> n; 
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i]; 
        sum+=arr[i];
    } 
    ll avg = sum/n;
    int diff = 0; 
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=avg && diff < 3)
        {
            // setting minimum
            ll t = arr[i]; 
            if(t < avg)
            {
                min = arr[i]; 
                imin = i+1;
            } 
            // setting maximum
            if(t>avg)
            {
                max = arr[i]; 
                imax = i+1;
            }
            diff++; 
        }
        else if(diff > 2) cout << "TIDAK SESUAI";
    } 
    if(diff==0)
    {
        cout << "SESUAI";
    }
    else if(imin!=0 && imax!=0 && diff<3)
    {
        cout << (max-min)/2 << " " << imax << " " << imin;
    }
    else 
    {
        cout << "TIDAK SESUAI";
    }
}