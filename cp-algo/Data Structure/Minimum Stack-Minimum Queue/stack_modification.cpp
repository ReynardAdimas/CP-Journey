#include<bits/stdc++.h>
using namespace std;

// mencari nilai minimum di dalam stack dengan waktu cepat 
stack<pair<int, int>> st; 

void add_element(int new_element)
{
    int new_min = st.empty() ? new_element : min(new_element, st.top().second); 
    st.push({new_element, new_min});
}

void remove_element()
{
    int removed_element = st.top().first; 
    st.pop(); 
    cout << removed_element << " telah dihapus" << '\n';
}

int get_minimum()
{
    int minimum = st.top().second;
    return minimum;
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