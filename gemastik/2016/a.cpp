#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int t; 
    int h=0,l=0;
    cin >> t; 
    while(t--)
    {
        int n; 
        cin >> n; 
        for(int i=0;i<n;i++)
        {
            vector<int>a; 
            for (int j = 0; j < 3; j++)
            {
                int b; 
                cin >> b; 
                a.push_back(b);
            }
            sort(a.begin(), a.end()); 
            h+=a.back(); 
            l+=a.front();
            a.clear();
        } 
        cout << l << " " << h << endl; 
        l=0;h=0;
    } 
     
    return 0;
}