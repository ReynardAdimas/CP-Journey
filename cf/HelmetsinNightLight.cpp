#include<bits/stdc++.h>
using namespace std;


void solution()
{
    int n,p; 
    cin >> n >> p; 
    long long ans =p;
    long long dibagi = 1;
    vector<long long> a(n), b(n); 
    vector<pair<long , long long>> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i]; 
    } 
    for(int i=0;i<n;i++)
    {
        cin >> b[i]; 
    } 
    for(int i=0;i<n;i++)
    {
        v[i] = {b[i], a[i]};
    } 
    sort(v.begin(), v.end());
    for(int i=0;i<n;i++)
    {
        if(v[i].first >= p) break; 
        if(dibagi + v[i].second > n)
        {
            ans += (n-dibagi)*v[i].first; 
            dibagi = n;
            break;
        }
        else 
        {
            ans += v[i].second * v[i].first; 
            dibagi += v[i].second; 
        }
    } 
    ans += (n-dibagi)*p;
    cout << ans << endl;
    

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