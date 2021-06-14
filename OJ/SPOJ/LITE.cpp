#include <bits/stdc++.h>
#define MAX 1000010
#define pair < int, int > pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define print(x) cout << (#x) << " = " << x << endl

using namespace std;
typedef long long int lli;

lli ara[MAX], n;

struct {
    lli sum;
    bool prop;

} tree[4 * MAX];

void build_tree(lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (st == ed) {
        tree[idx].sum = ara[st];
        return;
    }

    lli mid = (st + ed) / 2;

    build_tree(idx * 2, st, mid);
    build_tree(idx * 2 + 1, mid + 1, ed);

    tree[idx].sum = tree[idx * 2].sum + tree[idx * 2 + 1].sum;
}

void propagate(lli idx, lli st, lli ed) {
    tree[idx].sum = (ed - st + 1) - tree[idx].sum;

    if (st != ed) {
        tree[2 * idx].prop     = !tree[2 * idx].prop;
        tree[2 * idx + 1].prop = !tree[2 * idx + 1].prop;
    }
}

void update(lli s, lli e, lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (tree[idx].prop) {
        tree[idx].prop = 0;
        propagate(idx, st, ed);
    }

    if (st > e || ed < s)
        return;

    if (st >= s && ed <= e) {
        propagate(idx, st, ed);

        return;
    }

    lli mid = (st + ed) / 2;

    update(s, e, 2 * idx, st, mid);
    update(s, e, 2 * idx + 1, mid + 1, ed);

    if (st != ed)
        tree[idx].sum = tree[2 * idx].sum + tree[2 * idx + 1].sum;
}

lli query(lli s, lli e, lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (st > e || ed < s)
        return 0;

    if (tree[idx].prop) {
        propagate(idx, st, ed);

        tree[idx].prop = 0;
    }

    if (st >= s && ed <= e) {
        return tree[idx].sum;
    }

    lli mid = (st + ed) / 2;

    lli left  = query(s, e, 2 * idx, st, mid);
    lli right = query(s, e, 2 * idx + 1, mid + 1, ed);

    return left + right;
}

int main() {
    // read();

    lli m;
    scanf("%lli%lli", &n, &m);

    while (m--) {
        lli op, s, e;
        scanf("%lli%lli%lli", &op, &s, &e);

        if (op == 0) {
            update(s - 1, e - 1);
        }
        else if (op == 1) {
            printf("%lli\n", query(s - 1, e - 1));
        }
    }
    return 0;
}