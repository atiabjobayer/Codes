#include <stdio.h>
int main() {
    int res = 1;

    for (int i = 10; i <= 20; i++) {
        if (i % 2 == 0) {
            continue;
        }

        res *= i;
    }

    printf("Product = %d\n", res);

    return 0;
}