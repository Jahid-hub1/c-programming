#include <stdio.h>

int main()
{

int age;

printf("Enter your age: ");
scanf("%d", &age);

if (age >=16)
{
    printf("You can apply for Driving Licence");
}

else 
{
    printf("Sorry, yor are not eligiable to apply for driving licence");
}
    return 0;
    
}

