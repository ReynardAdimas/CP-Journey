#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n;
    vector<int> genap; 
    vector<int> ganjil; 
    cin >> n; 
    if(n<=4)
    {
        if(n==1)
        {
            cout << 1 << endl;
        }
        else if(n==4)
        {
            cout << "2 4 1 3" << endl;
        }
        else 
        {
            cout << "NO SOLUTION" << endl;    
        }
        
    }
    else 
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                genap.push_back(i);
            }
            else 
            {
                ganjil.push_back(i);
            }
        }
        sort(genap.begin(),genap.end(),greater<int>()); 
        sort(ganjil.begin(),ganjil.end(),greater<int>()); 
        for(auto x:genap)
        {
            cout << x << " ";
        }
        for(auto x:ganjil)
        {
            cout << x << " ";
        }
    }
}