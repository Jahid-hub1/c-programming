#include <stdio.h>

int main ()
{
    int type;
    int train;
    int bus;
    float price;

    printf("Select type of your journey (1 = train, 2 = bus): ");
    scanf("%d", &type);

    switch (type)
    {
        case 1:
            printf("Choose your destination (1-London; 2-Snowdonia; 3-Edinburgh): ");
            scanf("%d", &train);

            switch (train)
            {
                case 1: price = 45.50;
                printf("London Victoria - £ %.2f\n", price); break;
                case 2: price = 75.00;
                printf("Snowdonia central - £ %.2f\n", price); break;
                case 3: price = 95.50;
                printf("Edinburagh Old Town- £ %.2f\n", price); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("Choose your destination (1-London; 2-Snowdonia; 3-Edinburgh): ");
            scanf("%d", &bus);

            switch (bus)
            {
                case 1: printf("London victoria: £30.00\n"); break;
                case 2: printf("Snowdonia central: £60.50\n"); break;
                case 3: printf("Edinburagh Old Town: £80.99\n"); break;
                default: printf("Invalid choice\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}