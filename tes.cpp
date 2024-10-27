#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int n,k;
    int minim = INT_MAX;
    vector<int> v; 
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a; 
        if(a < minim) minim = a;
        v.push_back(a);
    } 
    for(int i=0;i<k;i++)
    {
        if(v[i]==a) 
        {
            a++; 
            if(v[i-1] < v[i+1]) 
            {
                v[i-1]++;
            }
            else 
            {
                v[i+1]++;
            }
        }
    }    
    int result = 0;
    for(int i=0;i<n;i++)
    {
        int temp = v[i]*v[i+1];
        result += temp;
    }
    cout << result << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}