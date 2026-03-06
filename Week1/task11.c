#include <stdio.h>

int main() {
    int yearOfBirth = 1998;
    int currentYear = 2026;
    int age = currentYear - yearOfBirth;

    printf("You were born in %d, it's now %d. That means you will turn %d this year!\n", yearOfBirth, currentYear, age);

    return 0;
}
