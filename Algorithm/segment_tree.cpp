// Segment Tree => Range Max Query
#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int ara[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int seg[4 * MAX];

void build_tree(int index, int low, int high) {
    if (high == low) {
        seg[index] = ara[high];
        return;
    }

    int mid = (high + low) / 2;

    build_tree(2 * index + 1, low, mid);      // left child
    build_tree(2 * index + 2, mid + 1, high); // right child

    seg[index] = max(seg[2 * index + 1], seg[2 * index + 2]);
}

int query(int index, int low, int high, int l, int r) {
    if (low >= l && high <= r) // complete overlap
        return seg[index];

    if (high < l || low > r) // no overlap
        return INT_MIN;

    int mid = (high + low) / 2;

    int left  = query(2 * index + 1, low, mid, l, r);
    int right = query(2 * index + 2, mid + 1, high, l, r);

    return max(left, right);
}

void update(int index, int low, int high, int i, int value) {
    if (low > i || high < i)
        return;
    if (low == i && high == i) {
        seg[index] = value;
        return;
    }

    int mid = (low + high) / 2;

    update(2 * index + 1, low, mid, i, value);
    update(2 * index + 2, mid + 1, high, i, value);

    seg[index] = max(seg[index * 2 + 1], seg[index * 2 + 2]);
}

int main() {
    int n = 9;
    build_tree(0, 0, n - 1);

    cout << query(0, 0, n - 1, 3, 6) << endl;

    update(0, 0, n - 1, 5, 24);

    cout << query(0, 0, n - 1, 3, 6) << endl;

    return 0;
}