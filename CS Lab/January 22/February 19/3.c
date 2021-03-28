#include <stdio.h>

void average(float *a, float *b, float *c, float *d, float *e, float *avg) {
    *avg = (*a + *b + *c + *d + *e) / 5.0;
}

int main() {
    float a, b, c, d, e, avg;

    printf("Enter five numbers: ");

    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);

    average(&a, &b, &c, &d, &e, &avg);

    printf("Average: %f\n", avg);

    return 0;
}