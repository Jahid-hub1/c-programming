#include <stdio.h>

int main()
{

int speed;
int speedLimit;

printf("Whats your speed: ");
scanf("%d", &speed);

printf("Current speed Limit: ");
scanf("%d", &speedLimit);

if (speed>speedLimit)
{
printf("You have crossed the speed threshold!\n");
}
else if (speed>speedLimit+10)
{
printf("Your speed is %d, the speed limit is %d. Yor are speeding! £100 fine for you!!\n", speed,speedLimit);
}

else
{
printf("Please continue drive safe");
}
    return 0;
    
}
#include <stdio.h>

int main()
{

int speed;
int speedLimit;

printf("Whats your speed: ");
scanf("%d", &speed);

printf("Current speed Limit: ");
scanf("%d", &speedLimit);

if (speed>speedLimit)
{
printf("You have crossed the speed threshold!\n");
}
else if (speed>speedLimit+10)
{
printf("Your speed is %d, the speed limit is %d. Yor are speeding! £100 fine for you!!\n", speed,speedLimit);
}

else
{
printf("Please continue drive safe");
}
    return 0;
    
}
