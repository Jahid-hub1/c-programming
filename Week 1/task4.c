#include <stdio.h>
int main(void)
{
// Declare some variables
int age = 25;
int currentYear = 2020;

// Print age to the screen
printf("You are %d years old\n", age);

// Overwrite the value stored in age
age = 26;

// Print age to screen again
printf("Now you are %d years old\n", age);

// Create another variable and subtract age from currentYear
int birthyear = currentYear - age;
printf("You are %d, that means you were born in %d", age, birthyear);
return 0;
}
