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

int ara[MAX] = {4, -9, 3, 7, 1, 0, 2, 5}, n = 8;
int seg[4 * MAX];

void build_tree(int index, int st, int ed) {
    if (st == ed) {
        seg[index] = ara[st];
        return;
    }

    int mid = (st + ed) / 2;

    build_tree(index * 2, st, mid);
    build_tree(index * 2 + 1, mid + 1, ed);

    seg[index] = min(seg[index * 2], seg[index * 2 + 1]);
}

int query(int index, int st, int ed, int i, int j) {
    if (st > j || ed < i)
        return 100000000; // not in array
    if (st >= i && ed <= j)
        return seg[index]; // completely in segment

    int mid = (st + ed) / 2;

    int left  = query(2 * index, st, mid, i, j);
    int right = query(2 * index + 1, mid + 1, ed, i, j);

    return min(left, right);
}

void update(int index, int st, int ed, int i, int value) {
    if (st > i || ed < i)
        return;
    if (st == i && ed == i)
        seg[index] = value;

    int mid = (st + ed) / 2;

    update(2 * index, st, mid, i, value);
    update(2 * index + 1, st, mid, i, value);

    seg[index] = min(seg[index * 2], seg[index * 2 + 1]);
}

int main() {
    // read();
    // write();

    build_tree(1, 0, n - 1);

    // for (int i = 0; i < 30; i++)
    //     cout << seg[i] << " ";

    cout << query(1, 0, 7, 2, 4) << endl;

    return 0;
}