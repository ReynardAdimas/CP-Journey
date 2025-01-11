#include<bits/stdc++.h>
using namespace std; 

vector<int> v;

int fibo(int x)
{
    if(x==0)
    {
        return 0;
        v.push_back(0);
    }
    else if(x==1)
    {
        return 2;
        v.push_back(2);
    }
    else
    {
        v.push_back(fibo(x-1) + fibo(x-2));
    }
    return v[x];
}

void solution()
{
    int n; 
    cin >> n; 
    cout << fibo(n) << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
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