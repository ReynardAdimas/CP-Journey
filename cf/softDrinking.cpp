    #include<bits/stdc++.h>
    using namespace std; 

    void solution() 
    {
        int n,k,l,c,d,p,nl,np; 
        cin >> n >> k >> l >> c >> d >> p >> nl >> np; 
        int drink = k*l;
        int toast = drink/nl;
        int lime = c*d;
        int salt = p/np;
        int ans = min(toast, lime);
        ans = min(ans, salt)/n; 
        cout << ans << endl;
    }


    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(0);
        solution();
        return 0;
    }