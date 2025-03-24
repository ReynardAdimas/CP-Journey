#include<bits/stdc++.h>
using namespace std; 
void solution()
{
    int n; 
    cin >> n;
    vector<int> v(n), v1(n); 
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        v1[i] = v[i];
    } 
    sort(v1.begin(), v1.end()); 
    int l=0, r=n-1; 
    while(l<n && v[l]==v1[l])
    {
        l++;
    }
    while(r>l && v[r]==v1[r])
    {
        r--;
    }
    if(l>=r)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }
    reverse(v.begin()+l, v.begin()+r+1);
    if(v==v1)
    {
        cout << "yes" << endl;
        cout << l+1 << " " << r+1 << endl;
    }
    else 
    {
        cout << "no" << endl;
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