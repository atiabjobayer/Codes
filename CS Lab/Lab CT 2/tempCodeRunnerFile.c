#include <stdio.h>

const int MAX = 3;

int main() {

    int ara[] = {10, 100, 200};
    int i, *ptr[MAX];

    for (i = 0; i < MAX; i++) {
        ptr[i] = &ara[i];
    }

    for (i = 0; i < MAX; i++) {
        printf("Value of ara[%d] = %d\n", i, *ptr[i]);
    }

    return 0;
}