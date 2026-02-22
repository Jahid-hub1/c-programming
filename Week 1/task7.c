#include <stdio.h>
int main(void)
{

// Create a string
char city[50];

// Ask the user to input their city
printf("Enter the city you live in: \n");

// Get and save the input
scanf("%s", city);

// Output the text
printf("Wow! Living in %s must be amazing!", city);
return 0; 
}
