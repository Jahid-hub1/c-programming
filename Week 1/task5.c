#include <stdio.h>
int main(void)
{
 int age;

 // Be nice to the user - always accompany scanf with a printf
 printf("Please enter an age");
 scanf("%d", &age);
 printf("Your age is %d\n", age);
 return 0;
}
