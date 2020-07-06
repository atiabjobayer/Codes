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

int ara[MAX] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, n = 10;

struct {
    int sum;
    int prop;

} tree[4 * MAX];

void build_tree(int idx = 1, int st = 0, int ed = n - 1) {
    if (st == ed) {
        tree[idx].sum = ara[st];
        return;
    }

    int mid = (st + ed) / 2;

    build_tree(idx * 2, st, mid);
    build_tree(idx * 2 + 1, mid + 1, ed);

    tree[idx].sum = tree[idx * 2].sum + tree[idx * 2 + 1].sum;
}

void propagate(int idx, int st, int ed) {
    tree[idx].sum += tree[idx].prop;

    if (st != ed) {
        tree[2 * idx].sum += tree[idx].prop;
        tree[2 * idx + 1].sum += tree[idx].prop;
    }

    tree[idx].prop = 0;
}

void update(int s, int e, int v, int idx = 1, int st = 0, int ed = n - 1) {
    propagate(idx, st, ed);

    if (st > e || ed < s)
        return;

    if (st >= s && ed <= e) {
        tree[idx].prop = v;
        propagate(idx, st, ed);

        return;
    }

    int mid = (st + ed) / 2;

    update(s, e, v, 2 * idx, st, mid);
    update(s, e, v, 2 * idx + 1, mid + 1, ed);

    tree[idx].sum = max(tree[2 * idx].sum, tree[2 * idx + 1].sum);
}

int query(int s, int e, int idx = 1, int st = 0, int ed = n - 1,
          int carry = 0) {
    propagate(idx, st, ed);

    if (st > e || ed < s)
        return -INFINITY;

    if (st >= s && ed <= e) {
        return tree[idx].sum;
    }

    int mid = (st + ed) / 2;

    int left  = query(s, e, 2 * idx, st, mid, carry + tree[idx].prop);
    int right = query(s, e, 2 * idx + 1, mid + 1, ed, carry + tree[idx].prop);

    return max(left, right);
}

int main() {
    // read();

    bu // Range Sum Query

#include <bits/stdc++.h>
#define MAX 100000
#define pair < int, int > pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define print(x) cout << (#x) << " = " << x << endl

        using namespace std;
    typedef long long int lli;

    int ara[MAX] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, n = 10;

    struct {
        int sum;
        int prop;

    } tree[4 * MAX];

    void build_tree(int idx = 1, int st = 0, int ed = n - 1) {
        if (st == ed) {
            tree[idx].sum = ara[st];
            return;
        }

        int mid = (st + ed) / 2;

        build_tree(idx * 2, st, mid);
        build_tree(idx * 2 + 1, mid + 1, ed);

        tree[idx].sum = tree[idx * 2].sum + tree[idx * 2 + 1].sum;
    }

    void update(int s, int e, int v, int idx = 1, int st = 0, int ed = n - 1) {
        if (st > e || ed < s)
            return;

        if (st >= s && ed <= e) {
            tree[idx].sum += (ed - st + 1) * v;
            tree[idx].prop += v;

            return;
        }

        int mid = (st + ed) / 2;

        update(s, e, v, 2 * idx, st, mid);
        update(s, e, v, 2 * idx + 1, mid + 1, ed);

        tree[idx].sum = tree[2 * idx].sum + tree[2 * idx + 1].sum +
                        tree[idx].prop * (ed - st + 1);
    }

    int query(int s, int e, int idx = 1, int st = 0, int ed = n - 1,
              int carry = 0) {
        if (st > e || ed < s)
            return 0;

        if (st >= s && ed <= e) {
            return tree[idx].sum + carry * (ed - st + 1);
        }

        int mid = (st + ed) / 2;

        int left = query(s, e, 2 * idx, st, mid, carry + tree[idx].prop);
        int right =
            query(s, e, 2 * idx + 1, mid + 1, ed, carry + tree[idx].prop);

        return left + right;
    }

    int main() {
        // read();

        build_tree();

        update(0, 9, 10);

        cout << query(0, 4) << endl;

        return 0;
    }
    ild_tree();

    update(0, 9, 10);

    cout << query(0, 4) << endl;

    return 0;
}