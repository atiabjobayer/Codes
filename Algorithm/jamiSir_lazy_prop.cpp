// Range Minimum Query

#include <bits/stdc++.h>
#define MAX 100000
#define pair < int, int > pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define print(x) cout << (#x) << " = " << x << edl

using namespace std;
typedef long long int lli;

int ara[MAX] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, n = 10;

struct node {
    int sum, lazyfl, lazyval;

    node(){};

    node(int s, int lf, int lv) {
        sum     = s;
        lazyfl  = lf;
        lazyval = lv;
    }
} tree[4 * MAX];

void build_tree(int idx = 1, int st = 0, int ed = n - 1) {
    if (st == ed) {
        tree[idx].sum = ara[st];
        return;
    }

    int mid = (st + ed) / 2;

    build_tree(idx * 2, st, mid);
    build_tree(idx * 2 + 1, mid + 1, ed);

    tree[idx].sum = tree[idx * 2].sum + tree[idx * 2 + 1].sum;
}

void node_update(int idx, int st, int ed, int v) {
    tree[idx].sum += (ed - st + 1) * v;
    tree[idx].lazyfl = 1;
    tree[idx].lazyval += v;
}

void lazy_update(int idx, int st, int ed) {
    int mid = (st + ed) / 2;

    node_update(2 * idx, st, ed, tree[idx].lazyval);
    node_update(2 * idx + 1, mid + 1, ed, tree[idx].lazyval);

    tree[idx].lazyfl = tree[idx].lazyval = 0;
}

node merge_node(const node &a, const node &b) {
    node ret;

    ret.sum    = a.sum + b.sum;
    ret.lazyfl = ret.lazyval = 0;

    return ret;
}

void tree_update(int idx, int st, int ed, int s, int e, int v) {
    if (s > e || ed < s)
        return;

    if (st >= s && ed <= e) {
        node_update(idx, st, ed, v);
        return;
    }

    if (tree[idx].lazyfl) {
        lazy_update(idx, st, ed);
    }

    int mid = (st + ed) / 2;

    tree_update(idx, st, mid, s, e, v);
    tree_update(idx, mid + 1, ed, s, e, v);

    tree[idx] = merge_node(tree[2 * idx], tree[2 * idx + 1]);
}

node query(int idx, int st, int ed, int s, int e) {
    if (st > e || ed < s)
        return node(0, 0, 0);

    if (st >= s && ed <= e)
        return tree[idx];

    if (tree[idx].lazyfl)
        lazy_update(idx, st, ed);

    int mid = (st + ed) / 2;

    node a = query(2 * idx, st, mid, s, e);
    node b = query(2 * idx + 1, mid + 1, ed, s, e);

    return merge_node(a, b);
}

int main() { return 0; }