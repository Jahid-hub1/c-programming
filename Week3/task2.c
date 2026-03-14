#include <stdio.h>

int main ()
{
int iteam;
printf("Enter a number (1-3): ");
scanf("%d", &iteam);

switch (iteam)
{
case 1:
printf("Burger\n");
break;

case 2:
printf("Wings\n");
break;

case 3:
printf("Pancake\n");
break;

default:
printf("invalid");

}

    return 0;
}