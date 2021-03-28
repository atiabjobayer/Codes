#include <stdbool.h>
#include <stdio.h>

int checkLeapYear(int *year, bool *verdict) {
    if (*year % 400 == 0) {
        *verdict = true;
    }
    // not a leap year if visible by 100
    // but not divisible by 400
    else if (*year % 100 == 0) {
        *verdict = false;
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (*year % 4 == 0) {
        *verdict = true;
    }
    // all other years are not leap year
    else {
        *verdict = false;
    }
}

int main() {
    int year;
    bool leapYear;

    printf("Enter a year: ");
    scanf("%d", &year);

    checkLeapYear(&year, &leapYear);

    if (leapYear) {
        printf("Leap Year\n");
    }
    else {
        printf("Not Leap Year\n");
    }

    return 0;
}