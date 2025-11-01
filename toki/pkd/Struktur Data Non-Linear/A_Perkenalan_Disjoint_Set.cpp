#include<bits/stdc++.h>
using namespace std;

class DSU {
  private:
	vector<int> parents;
	vector<int> sizes;

  public:
	DSU(int size) : parents(size), sizes(size, 1) {
		for (int i = 0; i < size; i++) { parents[i] = i; }
	}

	int find(int x) { return parents[x] == x ? x : (parents[x] = find(parents[x])); }


	bool unite(int x, int y) {
		int x_root = find(x);
		int y_root = find(y);
		if (x_root == y_root) { return false; }

		if (sizes[x_root] < sizes[y_root]) { swap(x_root, y_root); }
		sizes[x_root] += sizes[y_root];
		parents[y_root] = x_root;
		return true;
	}


	bool check(int x, int y) { return find(x) == find(y); }
};


void solution()
{
   int n,q; 
   cin >> n >> q; 
   DSU dsu(n); 
   for(int i=0;i<q;i++)
   {
    int x,a,b; 
    cin >> x >> a >> b; 
    a--;
    b--;
    if(x==1)
    {
        dsu.unite(a,b);
    } 
    else 
    {
        bool ans = dsu.check(a,b); 
        if(ans) cout << "Y" << "\n"; 
        else cout << "T" << "\n";
    }

   }
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