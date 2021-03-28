#include <math.h>
#include <stdio.h>
int main() {
    double a, b, c, des, rt1, rt2, real, img;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    des = b * b - 4 * a * c;

    if (des > 0) {
        rt1 = (-b + sqrt(des)) / (2 * a);
        rt2 = (-b - sqrt(des)) / (2 * a);
        printf("root 1 = %.2lf and root 2 = %.2lf", rt1, rt2);
    }

    else if (des == 0) {
        rt1 = rt2 = -b / (2 * a);
        printf("root 1 = root 2 = %.2lf;", rt1);
    }

    else {
        real = -b / (2 * a);
        img  = sqrt(-des) / (2 * a);
        printf("root 1 = %.2lf+%.2lfi and root 2 = %.2f-%.2fi\n", real, img,
               real, img);
    }

    return 0;
}