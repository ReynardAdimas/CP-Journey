#include<bits/stdc++.h>
using namespace std; 
int a[105][105], b[105][105];
bool cekIdentik(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

bool cekVertikal(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][n-j-1])
            {
                return false;
            }
        }
    }
    return true;
}

bool cekHorizontal(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-i-1][j])
            {
                return false;
            }
        }
    }
    return true;
}

bool cekDiagonalKiri(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

bool cekDiagonalKanan(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[n-j-1][n-i-1])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n,m; 
    cin >> n >> m; 
    if(n!=m)
    {
        cout << "tidak identik" << endl;
    }
    else 
    {
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> a[i][j];
            }
        } 
        cin >> n >> m; 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> b[i][j];
            }
        } 
        if(cekIdentik(n))
        {
            cout << "identik" << endl;
        }
        else if(cekVertikal(n))
        {
            cout << "vertikal" << endl;
        }
        else if(cekHorizontal(n))
        {
            cout << "horisontal" << endl;
        }
        else if(cekDiagonalKiri(n))
        {
            cout << "diagonal kanan bawah" << endl;
        }
        else if(cekDiagonalKanan(n))
        {
            cout << "diagonal kiri bawah" << endl;
        }
        else 
        {
            cout << "tidak identik" << endl;
        }
    }
}