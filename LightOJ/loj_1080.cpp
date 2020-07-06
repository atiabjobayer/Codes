#include <bits/stdc++.h>
#define MAX 100010
#define pair < int, int > pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define echo(x) cout << (#x) << " = " << x << endl

using namespace std;
typedef long long int lli;

lli ara[MAX], n;
char str[MAX];

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
    // write();

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli tc;
    scanf("%lli", &tc);

    for (lli t = 1; t <= tc; t++) {
        str[0] = '\0';

        scanf("%s", str);

        memset(ara, 0, sizeof(ara));
        memset(tree, 0, sizeof(tree));

        printf("Case %lli:\n", t);

        n = strlen(str);

        for (lli i = 0; i < n; i++) {
            ara[i] = str[i] - '0';
        }

        build_tree();

        lli m;
        scanf("%lli", &m);

        while (m--) {
            getchar();

            char op;
            lli s, e;
            scanf("%c", &op);

            if (op == 'I') {
                scanf("%lli%lli", &s, &e);
                update(s - 1, e - 1);
            }
            else if (op == 'Q') {
                scanf("%lli", &s);

                printf("%lli\n", query(s - 1, s - 1));
            }
        }
    }
    return 0;
}