#include<bits/stdc++.h>
using namespace std;

// modifikasi dari modif 1 
// cara menghapus elemen tanpa tau elemen mana yang ingin kita hapus 
// dengan menyimpan index setiap elemen di dalam queue 
// dan menyimpan berapa elemen yang telah kita tambah dan kita hapus 

deque<pair<int, int>> q; 
int cnt_added = 0; 
int cnt_removed = 0; 

int get_minim()
{
    int minimum = q.front().first; 
    return minimum;
}

void add_element(int new_elem)
{
    while(!q.empty() && q.back().first > new_elem)
    {
        q.pop_back();
    }
    q.push_back({new_elem, cnt_added}); 
    cnt_added++;
} 

void remove_element()
{
    if(!q.empty() && q.front().second == cnt_removed)
    {
        q.pop_front();
    }
    cnt_removed++;
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