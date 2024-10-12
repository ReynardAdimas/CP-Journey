#include<bits/stdc++.h>
using namespace std; 
int cnt=0;

void solution()
{
    int n; 
    cin >> n; 
    if(n < 19) cout << 0 << endl;
    else if(n>=19 && n<29) cout << 1 << endl; // 19
    else if(n>=29 && n<39) cout << 2 << endl; 
    else if(n>=39 && n<49) cout << 3 << endl; 
    else if(n>=49 && n<59) cout << 4 << endl; 
    else if(n>=59 && n<69) cout << 5 << endl; 
    else if(n>=69 && n<79) cout << 6 << endl; 
    else if(n>=79 && n<89) cout << 7 << endl; 
    else if(n>=89 && n<99) cout << 8 << endl; 
    else if(n >= 99 ) cout << 9 << endl; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}