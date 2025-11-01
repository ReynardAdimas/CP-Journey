#include<bits/stdc++.h>
using namespace std;

// cara simpan semua elemen 
// cara hapus elemen dari depan tanpa harus tau valuenya berapa 
// dengan cara simulasi 2 stack 

stack<pair<int, int>> s1,s2; 

int get_minim()
{
    int minimum;
    if(s1.empty() || s2.empty())
    {
        minimum = s1.empty() ? s2.top().second : s1.top().second;
    }
    else 
    {
        minimum = min(s1.top().second, s2.top().second); 
    }
    return minimum;
} 

void add_element(int new_elem)
{
    int minimum = s1.empty() ? new_elem : min(new_elem, s1.top().second);
    s1.push({new_elem, minimum});
}

void remove_element()
{
    if(s2.empty())
    {
        while(!s1.empty())
        {
            int element = s1.top().first; 
            s1.pop(); 
            int minimum = s2.empty() ? element : min(element, s2.top().second);
            s2.push({element, minimum});
        }
    }
    int removed_element = s2.top().first; 
    s2.pop();
}

void solution()
{
   cout << "Hello World" << endl;
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