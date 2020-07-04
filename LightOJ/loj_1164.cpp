// Range Sum Query

#include <bits/stdc++.h>
#define MAX 100000
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
    lli prop;

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

void update(lli s, lli e, lli v, lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (st > e || ed < s)
        return;

    if (st >= s && ed <= e) {
        tree[idx].sum += (ed - st + 1) * v;
        tree[idx].prop += v;

        return;
    }

    lli mid = (st + ed) / 2;

    update(s, e, v, 2 * idx, st, mid);
    update(s, e, v, 2 * idx + 1, mid + 1, ed);

    tree[idx].sum = tree[2 * idx].sum + tree[2 * idx + 1].sum +
                    tree[idx].prop * (ed - st + 1);
}

lli query(lli s, lli e, lli idx = 1, lli st = 0, lli ed = n - 1,
          lli carry = 0) {
    if (st > e || ed < s)
        return 0;

    if (st >= s && ed <= e) {
        return tree[idx].sum + carry * (ed - st + 1);
    }

    lli mid = (st + ed) / 2;

    lli left  = query(s, e, 2 * idx, st, mid, carry + tree[idx].prop);
    lli right = query(s, e, 2 * idx + 1, mid + 1, ed, carry + tree[idx].prop);

    return left + right;
}

int main() {
    // read();
    // write();

    lli tc;
    scanf("%lli", &tc);

    for (lli t = 1; t <= tc; t++) {
        lli q;
        scanf("%lli%lli", &n, &q);

        memset(tree, 0, sizeof tree);

        printf("Case %lli:\n", t);

        for (lli i = 0; i < q; i++) {
            lli op, s, e, v;
            scanf("%lli", &op);

            if (op == 0) {
                scanf("%lli%lli%lli", &s, &e, &v);

                update(s, e, v);
            }
            else if (op == 1) {
                scanf("%lli%lli", &s, &e);
                printf("%lli\n", query(s, e));
            }
        }
    }

    return 0;
}