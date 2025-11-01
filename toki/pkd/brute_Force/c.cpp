    #include<bits/stdc++.h>
    using namespace std;

    void solution()
    {
        int n; 
        cin >> n; 
        vector<int> v(n); 
        iota(v.begin(), v.end(), 1);
        sort(v.begin(), v.end()); 
        set<int> s;
        do
        {
            string num;
            for(auto i:v)
            {
                //cout << i;
                num+=to_string(i);
            }
            s.insert(stoi(num));
            //cout << endl;
        } while (next_permutation(v.begin(), v.end()));
        for(auto i:s)
        {
            cout << i << endl;
        }
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        int t = 1;
        //cin >> t;
        while(t--)
        {
            solution();
        }
        return 0;
    }
