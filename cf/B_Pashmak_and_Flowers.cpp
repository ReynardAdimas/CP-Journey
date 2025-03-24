#include<bits/stdc++.h>
using namespace std; 

int fact(int n)
{
    if(n==0 || n==1) return 1; 
    return n*fact(n-1);
}

long long kombinasi(int a,int b)
{
    if(b>a) return 0; 
    if(b==0 || b==a) return 1; 
    long long res = 1; 
    for(int i=1;i<=b;i++)
    {
        res = res * (a-i+1)/i;
    }
    return res;
}

void solution()
{
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for(int i=0;i<n;i++) cin >> v[i]; 
    int largest = *max_element(v.begin(), v.end()); // 1
    int smallest = *min_element(v.begin(), v.end()); // 1
    long long countLargest=0; 
    long long countSmallest=0;
    //cout << countLargest << " " << countSmallest << endl;
    for(int i=0;i<n;i++)
    {
        if(v[i]==largest) countLargest++; // 1
        if(v[i]==smallest) countSmallest++; // 1
    }
    //cout << largest << " " << smallest << endl;
    //cout << countLargest << " " << countSmallest << endl;
    if(largest==smallest)
    {
        cout << largest-smallest << " " << kombinasi((countLargest+countSmallest)/2,2) << endl;    
    }
    else 
    {
        cout << largest-smallest << " " << countLargest*countSmallest << endl;
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