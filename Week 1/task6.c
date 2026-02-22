#include <stdio.h>
int main(void)
{

// Declare some variables
int age;
char initial;

// Read in values from user:
printf("Please enter your initial:");
scanf("%c", &initial);
printf("Please enter your age:");
scanf("%d", &age);

// Print to screen
printf("your initial is %c and you are %d years old", initial, age);
return 0;
}
