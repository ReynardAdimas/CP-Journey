#include<bits/stdc++.h>
using namespace std;

struct Node {
    int mp[16];
};

Node node_add(int x) {
    Node res;
    for (int i = 0; i < 16; i++) {
        res.mp[i] = (i + x) % 16;
    }
    return res;
}

Node node_xor(int x) {
    Node res;
    for (int i = 0; i < 16; i++) {
        res.mp[i] = i ^ x;
    }
    return res;
}

const int maxN = 200'000;
Node t[4*maxN];

vector<Node> init;

Node merge(Node a, Node b) {
    Node res;
    for (int i = 0; i < 16; i++) {
        res.mp[i] = b.mp[a.mp[i]];
    }

    return res;
}

void build(int u, int l, int r) {
    if (l == r) {
        t[u] = init[l];
        return;
    }

    int mid = (l + r) / 2;
    build(2 * u + 1, l, mid);
    build(2 * u + 2, mid + 1, r);

    t[u] = merge(t[2*u + 1], t[2*u + 2]);
}

void update(int u, int l, int r, int i, Node& target) {
    if (l == r) {
        t[u] = target;
        return;
    }

    int mid = (l + r)/2;
    if (i <= mid) {
        update(2*u+1, l, mid, i, target);
    } else {
        update(2*u+2, mid + 1, r, i, target);
    }

    t[u] = merge(t[2*u + 1], t[2*u + 2]);
}

void solution()
{
    int N, Q;
    cin >> N >> Q;

    init.resize(N);
    for (int i = 0; i < N; i++) {
        char ch;
        int x;
        cin >> ch >> x;
        if (ch == '+') {
            init[i] = node_add(x);
        } else {
            init[i] = node_xor(x);
        }
    }

    build(0, 0, N - 1);

    for (int i = 0; i < Q; i++) {
        int j, k;
        char ch;
        cin >> j >> ch >> k;
        j--;

        Node target;

        if (ch == '+') {
            target = node_add(k);
        } else {
            target = node_xor(k);
        }

        update(0, 0, N - 1, j, target);
        cout << t[0].mp[0] << endl;
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