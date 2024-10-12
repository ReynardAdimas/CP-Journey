#include<bits/stdc++.h>
using namespace std; 

vector<int> factor(int n)
{
    vector<int> ret; 
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            ret.push_back(i);
            n/=i;
        }
    } 
    if(n>1)
    {
        ret.push_back(n);
    }
    return ret;
}

int main()
{
    vector<int> ans = factor(18); 
    for(auto a:ans)
    {
        cout << a << endl;
    }
}