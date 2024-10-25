#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int y;
    cin >> y;
    for(int i = y+1; ;i++)
    {
        string yr = to_string(i); 
        unordered_set<char> p(yr.begin(), yr.end()); 
        if(p.size()==4)
        {
            cout << i;
            break;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}