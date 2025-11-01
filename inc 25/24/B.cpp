#include<bits/stdc++.h>
using namespace std;

int D, N, M;
set<string> W;
vector<string> A, B;

int solve(int i) {
    
}

void solution()
{
    cin >> D;
    
    for (int i = 0; i < D; i++) {
        string s;
        cin >> s;
        W.insert(s);
    }

    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        A.push_back(s);
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        string s;
        cin >> s;
        B.push_back(s);
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