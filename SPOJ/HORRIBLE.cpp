// Bismillahir Rahmanir Rahim
// Range Sum Query
#include <bits/stdc++.h>
#define MAX 1000010

using namespace std;
typedef long long int lli;

lli ara[MAX];
lli seg[4 * MAX], lazy[4 * MAX];

void build_tree(lli index, lli low, lli high) {
    if (high == low) {
        seg[index] = ara[high];
        return;
    }

    lli mid = (high + low) / 2;

    build_tree(2 * index + 1, low, mid);      // left child
    build_tree(2 * index + 2, mid + 1, high); // right child

    seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
}

lli query(lli index, lli low, lli high, lli l, lli r) {
    // LAZY PRP START
    if (lazy[index] != 0) {
        seg[index] += (high - low + 1) * lazy[index];

        // propagate to bottom
        if (low != high) {
            lazy[2 * index + 1] += lazy[index];
            lazy[2 * index + 2] += lazy[index];
        }

        // clearing current level
        lazy[index] = 0;
    }
    // LAZY PRP END

    if (low >= l && high <= r) {
        return seg[index];
    } // complete overlap

    if (high < l || low > r) {
        return 0;
    } // no overlap

    lli mid = (high + low) / 2;

    lli left  = query(2 * index + 1, low, mid, l, r);
    lli right = query(2 * index + 2, mid + 1, high, l, r);

    return (left + right);
}

void update(lli index, lli low, lli high, lli l, lli r, lli value) {
    // LAZY PRP START
    if (lazy[index] != 0) {
        seg[index] += (high - low + 1) * lazy[index];

        // propagate to bottom
        if (low != high) {
            lazy[2 * index + 1] += lazy[index];
            lazy[2 * index + 2] += lazy[index];
        }

        // clearing current level
        lazy[index] = 0;
    }
    // LAZY PRP END

    if (low >= l && high <= r) { // complete overlap
        seg[index] += (high - low + 1) * value;
        lazy[2 * index + 1] += value;
        lazy[2 * index + 2] += value;

        return;
    }

    if (high < l || low > r) // no overlap
        return;

    if (low == high) {
        return;
    }

    lli mid = (low + high) / 2;

    update(2 * index + 1, low, mid, l, r, value);
    update(2 * index + 2, mid + 1, high, l, r, value);

    seg[index] = seg[index * 2 + 1] + seg[index * 2 + 2];
}

int main() {
    lli tc;

    scanf("%lli", &tc);

    for (int t = 1; t <= tc; t++) {
        lli n, c;
        scanf("%lli%lli", &n, &c);

        memset(seg, 0, sizeof(seg));
        memset(lazy, 0, sizeof(lazy));

        for (int i = 0; i < c; i++) {
            lli op;

            scanf("%lli", &op);

            if (op == 0) {
                // cout << "ekhaneee" << endl;
                lli l, r, val;

                scanf("%lli%lli%lli", &l, &r, &val);

                update(0, 0, n - 1, l - 1, r - 1, val);
            }
            else {
                // cout << "oikhanee" << endl;
                lli l, r;

                scanf("%lli%lli", &l, &r);

                printf("%lli\n", query(0, 0, n - 1, l - 1, r - 1));
            }
        }
    }

    return 0;
}