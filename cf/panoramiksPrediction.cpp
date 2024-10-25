#include<bits/stdc++.h>
using namespace std; 

bool cek(int n)
{
    if (n <= 1) {
        return false;
    }   
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true;
}

void solution()
{
    int primes[105];
    int cnt = 0;
    for (int i = 2; i <= 100; i++) {
        if (cek(i)) {
            primes[cnt] = i; 
            cnt++;
        }
    }

    int n,m; 
    cin >> n >> m;
    int cekin = 0;
    if(m>n)
    {
        for(int i=0;i<100;i++)
        {
            if(n==primes[i] && m==primes[i+1]) cekin=1;
        }
        if(cekin==1) cout << "YES" << endl; 
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    solution();
    return 0;
}