#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n,x,y,z; 
    cin >> n >> x >> y >> z; 
    if(n >= x && n >= y)
    {
        if((x<=z && z<=y) || (y<=z && z<=x))
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
    else 
    {
        cout << "No" << endl;
    }
}