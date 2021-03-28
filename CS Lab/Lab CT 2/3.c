#include <stdio.h>

void bubble_sort(int n, int *array) {
    int i, j, t;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(array + j) < *(array + i)) {
                t = *(array + i);

                *(array + i) = *(array + j);
                *(array + j) = t;
            }
        }
    }
}

int main() {
    int n     = 10;
    int ara[] = {10, 30, 50, 80, 20, 40, 70, 90, 100, 60};

    bubble_sort(n, ara);

    printf("\n\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
    printf("\n\n\n");

    return 0;
}