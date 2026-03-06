#include <stdio.h>

int main()
{

int speed=85;
int speedLimit=70;

if (speed>speedLimit+10)
{
    printf("Your speed is %d, the speed limit is %d. You exceeded limit by %d £100 fine for you and 3 points on your licence\n", speed,speedLimit,speed-speedLimit);
}

else if (speed>speedLimit)
{
printf("Your speed is %d, the speed limit is %d. You are speeding! £100 fine for you!!\n", speed,speedLimit);
}

else
{
    printf("Please continue to drive safely");
}
    return 0;
    
}