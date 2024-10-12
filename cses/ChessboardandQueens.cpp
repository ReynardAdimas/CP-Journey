#include<bits/stdc++.h>
using namespace std; 

const int n = 8;

void solution()
{
    vector<vector<bool>>blocked(N, vector<bool>(N)); 
    for(int i=0;i<N;i++)
    {
        string row; 
        cin >> row; 
        for(int c=0;c<N;c++)
        {
            blocked[r][c] = row[c] == "*";
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