#include<bits/stdc++.h>
using namespace std;

void solution()
{
    int n; 
    cin >> n;
//    string s; 
//    cin >> s; 
   // karena pasti a-z, bisa menggunakan map
   unordered_map<char, int> freq; 
//    for(char c : s)
//    {
//     freq[c]++;
//    }
   for(int i=0;i<n;i++)
   {
    char c; 
    cin >> c; 
    freq[c]++;
   }
   vector<pair<char, int>> freqList(freq.begin(), freq.end());
   sort(freqList.begin(), freqList.end(), [](auto &a, auto &b){
    return a.second > b.second;
   }); 
   bool cek = true;
   string jadi = "";
   int i=0;
   while(cek)
   {
    if(i>3)
    {   
        if(freqList[i-3].second > 0)
        {
            jadi += freqList[i].first;
            freqList[i].second--;
        }
        else
        {
            cek = false;
        }
    }
    else
    {
        jadi += freqList[i].first;
        freqList[i].second--;
    }
    i++;
   }
   if(jadi.length() < 3) cout << -1 << endl;
   else cout << jadi.length() << endl;
  
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