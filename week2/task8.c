#include <stdio.h>

int main()
{

    int age;
    float ticketPrice=4.0;

    printf("How old are you?: ");
    scanf("%d", &age);

    if (age<4)
    {
        ticketPrice = 0.0;
        printf("Infant travel for free.");
    }

else if (age>=65)
{
    ticketPrice/=3;
printf("Price for pensioner is £%.2f.\n", ticketPrice);
}

else if (age<=16)
{
    ticketPrice*=0.5;
printf("Price for U16 is £%.2f.\n", ticketPrice);
}

else 
{
    printf("Ticke Price £%.2f\n", ticketPrice);
}
    return 0;
    
}