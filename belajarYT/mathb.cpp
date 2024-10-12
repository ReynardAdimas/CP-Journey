#include<bits/stdc++.h>
using namespace std; 

const int maks = 1000001;
bool prime[maks];

void sieve()
{
    int i,j; 
    prime[0]=prime[1]=true; 

    for(i=4;i<maks;i+=2)
    {
        prime[i]=true;
    }
    for(i=3;i*i<=maks;i+=2)
    {
        if(!prime[i])
        {
            for(j=i*i;j<maks;j+=2*i)
            {
                prime[j]=true;
            }
        }
    }
}

bool isSquared(long double x)
{
    if(x>=0)
    {
        long long sr = sqrt(x);
        return(sr*sr==x);
    }
    return false;
}

int main()
{
    sieve();
    int n; 
    cin >> n; 
    while(n--)
    {
        long long a; 
        cin >> a; 
        if(a==1) cout << "NO" << endl;
        else
        {
            long long r = sqrt(a); 
            if(!prime[r] && r*r==a)
            {
                cout << "YES" << endl;
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
    }
}