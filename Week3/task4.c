#include <stdio.h>

int main ()
{
char grade;
printf("Enter your grade: ");
scanf("%c", &grade);

switch (grade)
{
case 'A':
case 'a':
printf("Excellent!!!\n");
break;

case 'B':
case 'b':
printf("Very Good\n");
break;

case 'C':
case 'c':
printf("Good\n");
break;

case 'D':
case 'd':
printf("Poor\n");
break;

default:
printf("invalid\n");

}

    return 0;
}