#include <stdio.h>
int main(void)
{

int age;
char initial;


printf("Please enter your initial:");
scanf("%c", &initial);

printf("Please enter your age:");
scanf("%d", &age);


printf("your initial is %c and you are %d years old", initial, age);

return 0;
}
