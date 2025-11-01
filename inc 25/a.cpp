#include<bits/stdc++.h>
using namespace std; 

bool comp(tuple<int,int,string> &a, tuple<int,int,string> &b){
    auto [x1,y1,z1] = a;
    auto [x2,y2,z2] = b;

    if(x1 != x2){
        return x1 > x2;
    }
    if(y1 != y2){
        return y1 < y2;
    }
    return z1 < z2;
}

void solution()
{
    int n;
    cin >> n;

    vector<tuple<int,int,string>> v1;
    for (int i = 0; i < n; i++)
    {
        string s;
        int a,b;
        cin >> s >> a >> b;
        int temp1 = a;
        int temp2 = b;
        cin >> a >> b;
        temp1+=a;
        temp2+=b;
        v1.push_back({temp1,temp2,s});
    }
    
    sort(v1.begin(), v1.end(), comp);
    for (int i = 0; i < n; i++)
    {
        auto[a,b,c] = v1[i];
        cout << c << endl;
    }
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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