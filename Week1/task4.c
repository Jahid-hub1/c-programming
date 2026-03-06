#include <stdio.h>
int main(void)
{

int age = 25;
int currentYear = 2020;


printf("You are %d years old\n", age);

age = 26;


printf("Now you are %d years old\n", age);


int birthyear = currentYear - age;
printf("You are %d, that means you were born in %d", age, birthyear);
return 0;
}
