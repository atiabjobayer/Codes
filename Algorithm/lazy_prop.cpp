// Bismillahir Rahmanir Rahim
// Range Sum Query
#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int ara[MAX] = {1, 2, 3, 4, 5};
int seg[4 * MAX], lazy[4 * MAX];

void build_tree(int index, int low, int high) {
    if (high == low) {
        seg[index] = ara[high];
        return;
    }

    int mid = (high + low) / 2;

    build_tree(2 * index + 1, low, mid);      // left child
    build_tree(2 * index + 2, mid + 1, high); // right child

    seg[index] = seg[2 * index + 1] + seg[2 * index + 2];
}

int query(int index, int low, int high, int l, int r) {
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

    int mid = (high + low) / 2;

    int left  = query(2 * index + 1, low, mid, l, r);
    int right = query(2 * index + 2, mid + 1, high, l, r);

    return (left + right);
}

void update(int index, int low, int high, int l, int r, int value) {
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

    int mid = (low + high) / 2;

    update(2 * index + 1, low, mid, l, r, value);
    update(2 * index + 2, mid + 1, high, l, r, value);

    seg[index] = seg[index * 2 + 1] + seg[index * 2 + 2];
}

int main() {
    int n = 5;
    memset(lazy, 0, sizeof(lazy));
    build_tree(0, 0, n - 1);

    update(0, 0, n - 1, 1, 3, 2);
    update(0, 0, n - 1, 3, 4, 5);

    // cout << query(0, 0, n - 1, 3, 6) << endl;

    // update(0, 0, n - 1, 5, 7, 24);

    cout << query(0, 0, n - 1, 2, 3) << endl;

    return 0;
}