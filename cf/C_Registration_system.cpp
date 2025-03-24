#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;

    unordered_map<string, int> data;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        data[name]++; // Otomatis menambahkan jika belum ada
        if(data[name]==1)
        {
            cout << "OK" << endl;
        }
        else 
        {
            cout << name << data[name]-1<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int t;
    //cin >> t;
    t=1;
    while (t--)
    {
        solution();
    }

    return 0;
}
