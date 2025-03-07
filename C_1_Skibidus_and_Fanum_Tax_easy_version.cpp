#include<bits/stdc++.h>
using namespace std; 

bool cek(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}

void solution()
{
   int n,m;
   cin >> n >> m;
   int a[n];
   for (int i = 0; i < n; i++)
   {
        cin >> a[i];
   }
   int M; 
   cin >> M;
   for(int i=0;i<n;i++)
   {
    if(a[i] > a[i+1])
    {
        a[i+1] = M-a[i+1];
        if(cek(a,n))
        {
            cout << "YES" << endl;
            break;
        }
        else
        {
            cout << "NO" << endl;
            break;
        }
    } 
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