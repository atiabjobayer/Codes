// Bismillahir Rahmanir Rahim
// Range Sum Query
#include <bits/stdc++.h>
#define MAX 15
using namespace std;

int ara[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tree[MAX + 10];

int query(int index, int size) {
    int sum = 0;

    while (index <= size) {
        sum += tree[index];

        index -= index & (-index);
    }

    return sum;
}

void update(int index, int value, int size) {
    index++;
    while (index <= size) {
        tree[index] += value;

        index += index & (-index);
    }
}

void build_tree(int size) {
    for (int i = 0; i < size; i++) {
        update(0, ara[i], size);
    }
}

int main() {
    memset(tree, 0, sizeof(tree));

    build_tree(10);

    return 0;
}