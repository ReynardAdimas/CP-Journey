#include<bits/stdc++.h>
using namespace std; 

set<int> s;  // --> sama kaya balanced binary tree
// tidak bisa jika data duplikat 
// kompleksitas : O(log N)
int main()
{
    // berguna untuk online query --> insert query di tengah2 update 
    int q; 
    cin >> q; 
    while(q--)
    {
        char c; 
        int x; 
        cin >> c >> x; 
        if(c == 'I') // insert data baru 
        {
            s.insert(x);
        }
        if(c == 'D') // delete element 
        {
            s.erase(x);
        } 
        if(c == 'S') // searching element 
        {
            if(s.count(x)) cout << "ADA" << endl; 
            else cout << "TIDAK ADA" << endl;
        }
    }
}