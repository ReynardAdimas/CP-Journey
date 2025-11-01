#include<bits/stdc++.h>
using namespace std;

void solution()
{
   string s; 
   cin >> s; 
   vector<int> freq(26, 0);
   for(int i=0;i<s.length();i++) freq[s[i] - 'a']++; 
   vector<string> palin;
   vector<char> ganjil;  
   for(int i=0;i<26;i++)
   {
    if(freq[i]%2==1)
    {
        ganjil.push_back('a'+i);
    }
   } 

   int k = max(1, (int)ganjil.size()); 
   palin.resize(k); 

   //if(ganjil.empty()) ganjil.push_back(''); 
   
   for(int i=0;i<(int)ganjil.size();i++)
   {
    palin[i] += ganjil[i];
   }   

   int id = 0;
   for(int i=0;i<26;i++)
   {
     while(freq[i] >= 2)
     {
        palin[id].insert(palin[id].begin(), 'a' + i);
        palin[id].push_back('a'+i); 
        freq[i] -= 2; 
        id = (id+1)%k;
     }
   }

   cout << k << "\n"; 
   for(auto x:palin) cout << x << "\n"; 
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