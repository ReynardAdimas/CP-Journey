#include<bits/stdc++.h>
using namespace std;

// cara yang sama dengan queue 

deque<int> q; 

int get_minim()
{
    int minimum = q.front();
    return minimum;
}

void add_element(int new_element)
{
    while(!q.empty() && q.back() > new_element)
    {
        q.pop_back();
    }
    q.push_back(new_element);
}

void remove_element(int remove_elem)
{
    if(!q.empty() && q.front() == remove_elem)
    {
        q.pop_front();
    }
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