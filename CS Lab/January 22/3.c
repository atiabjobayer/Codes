#include <math.h>
#include <stdio.h>
int main() {
    int p, n, r;

    printf("Enter principle: ");
    scanf("%d", &p);

    printf("Enter rate of interest(percentage): ");
    scanf("%d", &r);

    printf("Enter number of years: ");
    scanf("%d", &n);

    double rx = (r / 100.0);

    printf("Simple Interest: %0.3lf\n", p * rx * n);

    double cpi = p * pow((1 + rx), n) - p;

    printf("Compound Interest: %0.3lf\n", cpi);

    return 0;
}