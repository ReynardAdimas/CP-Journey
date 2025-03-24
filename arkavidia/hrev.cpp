#include<bits/stdc++.h>
#define int long long
using namespace std; 
#define maxn 200005 
vector<bool> isPrime; 
vector<int> sieve(int r)
{
    isPrime.assign(r+1, true); 
    isPrime[0] = isPrime[1] = false; 
    vector<int> prima;
    for(int i=2;i*i<=r;i++)
    { 
        if(isPrime[i])
        {
            prima.push_back(i);
            for(int j=i*i;j<=r;j+=i)
            {
                isPrime[j] = false;
            }
        }
    }
    return prima;
} 

vector<int> segmented(int l, int r)
{
    int akarr = sqrt(r); 
    vector<int> somePrimes= sieve(akarr); 
    vector<bool> is_prime(r-l+1, true); 

    for(int p:somePrimes)
    {
        int start = max(p*p, (l+p-1)/p*p);
        for(int j=start;j<=r;j+=p)
        {
            is_prime[j-l] = false;
        }
    }

    vector<int> prima; 
    for(int i=0;i<=r-l;i++)
    {
        if(is_prime[i] && (i+l)>=2)
        {
            prima.push_back(i+l);
        }
    }
    return prima;
}


vector<int> findLongest(int l, int r)
{
    vector<int> prima = segmented(l,r); 
    unordered_set<int> primeSet(prima.begin(), prima.end()); 
    vector<int> longest; 
    for(int q:prima)
    {
        vector<int> curSeries; 
        int num = q; 
        while(num <= r && primeSet.count(num)) {
            curSeries.push_back(num); 
            num = 4*num+1;
        }
        if(curSeries.size() > longest.size())
        {
            longest = curSeries;
        }
    }
    return longest;
}
void solution()
{
   int l,r; 
   cin >> l >> r; 
   vector<int> ans = findLongest(l,r); 
   cout << ans.size() << endl;
   for(int num:ans)
   {
    cout << num << " ";
   }
   cout << endl;
}   


int32_t main()
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