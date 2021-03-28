#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the number of row and column: ");
    scanf("%d%d", &row, &col);

    int ara[row][col];

    int v2[row];

    int v3 = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &ara[i][j]);
        }
    }

    int c = 100;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int temp  = ara[i][j] + c;
            ara[i][j] = ara[j][i];
            ara[j][i] = temp - c;
        }
    }

    printf("Version A\n");

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", ara[i][j]);
        }
        printf("\n");
    }

    return 0;
}