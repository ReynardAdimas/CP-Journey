#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>& cust, int n)
{
    int datang[n], pergi[n]; 
    for(int i=0;i<n;i++)
    {
        datang[i]=cust[i][0]; 
        pergi[i]=cust[i][1];
    } 
    sort(datang, datang+n); 
    sort(pergi, pergi+n); 
    int currCust = 0; 
    int maxCust = 0; 
    int i=0; 
    int j=0; 
    while(i<n and j<n)
    {
        if(datang[i] < pergi[j])
        {
            currCust++; 
            maxCust = max(maxCust, currCust);
            i++;
        }
        else 
        {
            j++; 
            currCust--;
        }
    }
    return maxCust;
}

void solution()
{
   int n; 
   cin >> n; 
   vector<vector<int>> cust(n);
   for(int i=0;i<n;i++)
   {
    int start, end; 
    cin >> start >> end; 
    cust[i].push_back(start); 
    cust[i].push_back(end);
   } 
//    for(int i=0;i<n;i++)
//    {
//     cout << cust[i][0] << " " << cust[i][1] <<  endl;
//    }
   cout << solve(cust, n) << "\n";
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