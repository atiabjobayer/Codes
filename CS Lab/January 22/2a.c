#include <stdio.h>
int main() {
    int a;
    int even = 0, odd = 0;
    while (1) {
        scanf("%d", &a);

        if (a < 0) {
            break;
        }

        switch (a % 2) {
        case 1:
            odd++;
            break;

        default:
            even++;
            break;
        }
    }

    printf("Odd = %d\n", odd);
    printf("Even = %d\n", even);

    return 0;
}