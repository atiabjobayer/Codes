#include <stdio.h>

void findLarge(int *a, int *b, int *c, int *max) {
    int tmp;

    if (*a > *b) {
        tmp = *a;
    }
    else {
        tmp = *b;
    }

    if (tmp > *c) {
        *max = tmp;
    }
    else {
        *max = *c;
    }
}

int main() {
    int a, b, c, max;

    printf("Enter three numbers: ");

    scanf("%d%d%d", &a, &b, &c);

    findLarge(&a, &b, &c, &max);

    printf("Largest: %d\n", max);

    return 0;
}