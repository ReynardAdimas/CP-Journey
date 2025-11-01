#include <iostream>
#include <vector>
#include <numeric>

struct DSU {
    std::vector<int> parent;
    DSU(int n) {
        parent.resize(n + 1);
        std::iota(parent.begin(), parent.end(), 0);
    }
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            parent[root_i] = root_j;
        }
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, Q;
    std::cin >> N >> Q;

    DSU dsu(N);

    for (int i = 0; i < Q; ++i) {
        int A, B;
        std::cin >> A >> B;
        if (A > B) {
            std::swap(A, B);
        }

        int neighborA_cw = (A % N) + 1;
        int neighborB_ccw = B - 1;

        if (dsu.find(neighborA_cw) == dsu.find(neighborB_ccw)) {
            std::cout << "No\n";
        } else {
            std::cout << "Yes\n";
            dsu.unite(A, B);
            dsu.unite(neighborA_cw, neighborB_ccw);
        }
    }
    return 0;
}