// Multiples of 3

#include <bits/stdc++.h>
#define MAX 100000
#define LEFT 2 * idx
#define RIGHT 2 * idx + 1
#define pair < int, int > pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define print(x) cout << (#x) << " = " << x << endl

using namespace std;
typedef long long int lli;

lli ara[MAX], n = 10;

struct {
    lli mod[3];
    lli prop;

} tree[4 * MAX];

void build_tree(lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (st == ed) {
        tree[idx].mod[0] = 1;

        tree[idx].mod[1] = tree[idx].mod[2] = tree[idx].prop = 0;
        return;
    }

    lli mid = (st + ed) / 2;

    build_tree(idx * 2, st, mid);
    build_tree(idx * 2 + 1, mid + 1, ed);

    for (lli i = 0; i < 3; i++) {
        tree[idx].mod[i] = tree[LEFT].mod[i] + tree[RIGHT].mod[i];
    }

    tree[idx].prop = 0;
}

void shift(lli idx) {
    lli mod2 = tree[idx].mod[2];
    lli mod1 = tree[idx].mod[1];
    lli mod0 = tree[idx].mod[0];

    tree[idx].mod[0] = mod2;
    tree[idx].mod[1] = mod0;
    tree[idx].mod[2] = mod1;
}

void propagate(lli idx, lli rep) {
    tree[LEFT].prop += tree[idx].prop;
    tree[RIGHT].prop += tree[idx].prop;

    for (lli i = 0; i < rep; i++) {
        shift(LEFT);
        shift(RIGHT);
    }

    for (lli i = 0; i < 3; i++) {
        tree[idx].mod[i] = tree[LEFT].mod[i] + tree[RIGHT].mod[i];
    }

    tree[idx].prop = 0;
}

void update(lli s, lli e, lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (st > e || ed < s)
        return;

    if (st >= s && ed <= e) {
        tree[idx].prop++;

        if (st == ed) {
            shift(idx);

            tree[idx].prop = 0;
        }
        else {
            propagate(idx, tree[idx].prop % 3);
        }

        return;
    }

    lli mid = (st + ed) / 2;

    if (tree[idx].prop > 0) {
        propagate(idx, tree[idx].prop % 3);
    }

    update(s, e, LEFT, st, mid);
    update(s, e, RIGHT, mid + 1, ed);

    for (lli i = 0; i < 3; i++) {
        tree[idx].mod[i] = tree[LEFT].mod[i] + tree[RIGHT].mod[i];
    }
}

lli query(lli s, lli e, lli idx = 1, lli st = 0, lli ed = n - 1) {
    if (st > e || ed < s)
        return 0;

    if (st >= s && ed <= e) {
        if (s != e && tree[idx].prop > 0) {
            propagate(idx, tree[idx].prop % 3);
        }

        return tree[idx].mod[0];
    }

    lli mid = (st + ed) / 2;

    if (tree[idx].prop > 0) {
        propagate(idx, tree[idx].prop % 3);
    }

    lli left  = query(s, e, LEFT, st, mid);
    lli right = query(s, e, RIGHT, mid + 1, ed);

    return left + right;
}

void print_tree(lli idx = 1, lli st = 0, lli ed = n - 1) {
    printf("(0: %lli, 1: %lli, 2: %lli, Prop: %lli ~ %lli-%lli)\n",
           tree[idx].mod[0], tree[idx].mod[1], tree[idx].mod[2], tree[idx].prop,
           st, ed);

    if (st != ed) {
        lli mid = (st + ed) / 2;

        print_tree(2 * idx, st, mid);
        print_tree(2 * idx + 1, mid + 1, ed);
    }
}

int main() {
    read();

    // lli tc;
    // scanf("%lli", &tc);

    // for (lli t = 1; t <= tc; t++) {
    //     lli q;
    //     scanf("%lli%lli", &n, &q);

    //     build_tree();

    //     printf("Case %lli:\n", tc);

    //     for (lli i = 0; i < q; i++) {
    //         lli op, in, fn;

    //         scanf("%lli%lli%lli", &op, &in, &fn);

    //         if (op == 0) {
    //             update(in, fn);
    //         }
    //         else if (op == 1) {
    //             printf("%lli\n", query(in, fn));
    //         }
    //     }
    // }

    build_tree();

    update(0, 9);
    update(3, 7);
    update(1, 4);
    cout << query(1, 7) << endl; // shows 2, correct

    update(2, 2);
    cout << query(2, 4) << endl; // shows 3, correct
    cout << query(8, 8) << endl; // shows 0, correct

    update(5, 8);
    cout << query(6, 9) << endl; // expected 2, return 0

    return 0;
}