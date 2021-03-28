// Bismillahir Rahmanir Rahim
// Range Flip Point Query
// TODO: point update zehetu, (mid >= pos) hoile left, or right
#include <bits/stdc++.h>
#define MAX 10
#define read(x) freopen(x, "r", stdin)
#define write(x) freopen(x, "w", stdout)

using namespace std;
typedef long long int lli;

lli ara[MAX];
lli seg[4 * MAX];

void build_tree(lli index, lli low, lli high) {
    if (high == low) {
        seg[index] = ara[high];
        return;
    }

    lli mid = (high + low) / 2;

    build_tree(2 * index + 1, low, mid);      // left child
    build_tree(2 * index + 2, mid + 1, high); // right child

    seg[index] = min(seg[2 * index + 1], seg[2 * index + 2]);
}

lli max_val = -1;

void findMax(lli index, lli low, lli high) {
    max_val = max(((high - low + 1) * seg[index]), max_val);
    if (high == low) {
        return;
    }

    lli mid = (high + low) / 2;

    findMax(2 * index + 1, low, mid);      // left child
    findMax(2 * index + 2, mid + 1, high); // right child
}

int main() {
    read("in.txt");
    // write("out.txt");

    lli tc;

    scanf("%lli", &tc);

    for (lli t = 1; t <= tc; t++) {
        memset(seg, 0, sizeof(seg));
        lli n;
        scanf("%lli", &n);

        for (lli i = 0; i < n; i++) {
            scanf("%lli", &ara[i]);
        }

        build_tree(0, 0, n - 1);

        findMax(0, 0, n - 1);

        printf("Case %lli: %lli\n", t, max_val);
        max_val = -1;
    }

    return 0;
}