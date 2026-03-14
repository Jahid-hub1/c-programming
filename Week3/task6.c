#include <stdio.h>

int main ()
{
    int category;
    int fruits;
    int drinks;

    printf("Select category (1 = Fruits, 2 = Drinks): ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("Choose a fruit (1 Apple, 2 Orange, 3 Mango, 4 Banana): ");
            scanf("%d", &fruits);

            switch (fruits)
            {
                case 1: printf("Apple\n"); break;
                case 2: printf("Orange\n"); break;
                case 3: printf("Mango\n"); break;
                case 4: printf("Banana\n"); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("Choose a drink (1 Cola, 2 Seven-up, 3 Tango, 4 Coffee): ");
            scanf("%d", &drinks);

            switch (drinks)
            {
                case 1: printf("Cola\n"); break;
                case 2: printf("Seven-up\n"); break;
                case 3: printf("Tango\n"); break;
                case 4: printf("Coffee\n"); break;
                default: printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}