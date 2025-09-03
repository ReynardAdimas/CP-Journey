#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int lcm(int a, int b)
{
    return a / gcd(a,b) * b;
}

void solution()
{
    int n,a,b; 
    cin >> n >> a >> b; 
    int fpb = lcm(a,b);
    int sum = (fpb/a) + (fpb/b);
    cout << sum << endl;
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