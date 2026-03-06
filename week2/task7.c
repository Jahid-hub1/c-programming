#include <stdio.h>

int main()
{

int day,month;

printf("Enter the day: ");
scanf("%d", &day);

printf("Enter the month: ");
scanf("%d", &month);

if (day==1 && month==1)
{
    printf("Happy New Year!!!");
}

else if (day==1 && month==5)
{
    printf("Today is world Labour day!!!");
}

else if (day==31 && month==12)
{
    printf("Yeahh, its new year eve!!!");
}

else 
{
    printf("It's a normal day");
}


    return 0;
    
}