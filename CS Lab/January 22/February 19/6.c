#include <stdbool.h>
#include <stdio.h>

int calcGrade(int *number, char *grade) {
    if (*number >= 90) {
        *grade = 'A';
    }
    else if (*number >= 80) {
        *grade = 'B';
    }
    else if (*number >= 70) {
        *grade = 'C';
    }
    else if (*number >= 60) {
        *grade = 'D';
    }
    else if (*number >= 50) {
        *grade = 'E';
    }
    else {
        *grade = 'F';
    }
}

int main() {
    int num;
    char grade;

    printf("Enter obtained number: ");
    scanf("%d", &num);

    calcGrade(&num, &grade);

    printf("Grade: %c\n", grade);

    return 0;
}