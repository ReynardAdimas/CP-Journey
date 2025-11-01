    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;

    const int maks = 100005; 
    vector<ll> v(maks);
    unordered_map<ll, ll> mp;

    void solution()
    {
        
    int a; 
    cin >> a; 
    if(a==0)
    {
        int k,x;
        cin >> k >> x; 
        mp[k] = x;
    }
    else 
    {
        int k; 
        cin >> k; 
        if(mp.count(k))
        {
            cout << mp[k] << '\n';
        }
        else 
        {
            cout << 0 << '\n';
        }
    } 
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        int t;
        t = 1;
        cin >> t;
        while(t--)
        {
            solution();
        }

        return 0;
    }
