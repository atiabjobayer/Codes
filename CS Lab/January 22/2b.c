#include <stdio.h>
int main() {
    char op;
    int a, b;

    printf("Chose an operator(+, -, *, /): ");

    scanf("%c", &op);

    printf("Enter operands: ");

    scanf("%d%d", &a, &b);

    int res;

    switch (op) {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;

    default:
        break;
    }

    printf("Result = %d\n", res);

    return 0;
}