#include <stdio.h>

int main ()
{
int num;
printf("Enter a number (1-4): ");
scanf("%d", &num);

switch (num)
{
case 1:
printf("Check balance\n");
break;

case 2:
printf("Withdrawl\n");
break;

case 3:
printf("Deposit\n");
break;

case 4:
printf("Exit\n");
break;

default:
printf("invalid\n");

}

    return 0;
}