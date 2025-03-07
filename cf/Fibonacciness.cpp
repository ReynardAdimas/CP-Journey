#include<bits/stdc++.h>
using namespace std; 

void solution()
{
    int a,b,c,d; 
    cin >> a >> b >> c >> d;
    int ans = 0;
    set<int> v;
    v.insert(a+b); 
    v.insert(c-b); 
    v.insert(d-c); 
    // set 
    // 1 1 1 --> set panjangnya cuma 3
    // 1 1 2 --> set panjanganya cuma 2
    // 1 2 3 --> set panjangnya cuma 1 
    if(v.size() == 3)
    {
        cout << 1 << endl;
    }
    if(v.size() == 1)
    {
        cout << 3 << endl;
    }
    if(v.size() == 2)
    {
        cout << 2 << endl;
    }

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    //t = 1;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}