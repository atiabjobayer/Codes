// Range Minimum Query

#include <bits/stdc++.h>
#define MAX 100010
#define pair <int, int> pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define print(x) cout << (#x) << " = " << x << edl

using namespace std;
typedef long long int lli;

int ara[MAX];
int seg[MAX * 10];

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

int main() {
    // read();
    // write();

    int tc;
    scanf("%d", &tc);

    for (int t = 1; t <= tc; t++) {
        memset(ara, 0, sizeof ara);
        memset(seg, 0, sizeof seg);

        int n, q;
        scanf("%d%d", &n, &q);

        for (int i = 0; i < n; i++)
            scanf("%d", &ara[i]);

        build_tree(1, 0, n - 1);

        printf("Case %d:\n", t);

        while (q--) {
            int i, j;
            scanf("%d%d", &i, &j);
            printf("%d\n", query(1, 0, n - 1, i - 1, j - 1));
        }
    }

    return 0;
}