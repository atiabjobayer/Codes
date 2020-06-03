// Range Sum Query Problem

#include <bits/stdc++.h>
#define MAX 10000
#define pair <int, int> pii
#define pb(x) emplace_back(x)
#define read() freopen("in.txt", "r", stdin);
#define write() freopen("out.txt", "w", stdout);
#define print(x) cout << (#x) << " = " << x << endl

using namespace std;
typedef long long int lli;

int ara[MAX];
int segment[MAX];

int preprocess(int size) {
    int current_segment = -1;
    int segment_size    = sqrt(size);

    for (int i = 0; i < size; i++) {
        if (i % segment_size == 0)
            current_segment++;

        segment[current_segment] += ara[i];
    }

    return segment_size;
}

int query(int segment_size, int i, int j) {
    int sum = 0;

    while (i < j && i % segment_size != 0) {
        sum += ara[i];
        i++;
    }

    while (i + segment_size <= j) {
        sum += segment[i / segment_size];

        i += segment_size;
    }

    while (i <= j) {
        sum += ara[i];
        i++;
    }

    return sum;
}

void update(int segment_size, int index, int val) {
    int seg = index / segment_size;

    segment[seg] -= ara[index];
    segment[seg] += val;

    ara[index] = val;
}

int main() {
    // read();
    // write();

    int size = sizeof(ara) / sizeof(ara[0]);

    int segment_size = preprocess(size);

    print(segment_size);

    cout << "Enter number of queries: " << endl;

    int q;
    cin >> q;

    while (q--) {
        cout << "Index Range(i, j): ";
        int i, j;
        cin >> i >> j;

        cout << query(segment_size, i, j) << endl;
    }

    return 0;
}