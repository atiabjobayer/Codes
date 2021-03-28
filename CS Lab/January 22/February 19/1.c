#include <stdio.h>

int f(int ***x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y    = *py;
    ***x = 3;
    return y + z;
}
void main() {
    int c, *b, **a, ***d;
    c = 4;
    b = &c;
    a = &b;
    d = &a;
    printf("%d\n\n", f(d, b, a));
}