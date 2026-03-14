#include <stdio.h>

int main()
{
    int category, item;

    printf("Enter category number: ");
    scanf("%d", &category);

    printf("Enter item number: ");
    scanf("%d", &item);

    switch (category)
    {
        case 1:
            printf("Fruits\n");

            switch (item)
            {
                case 1: printf("Apple\n"); break;
                case 2: printf("Orange\n"); break;
                case 3: printf("Mango\n"); break;
                case 4: printf("Banana\n"); break;
                default: printf("Invalid choice\n");
            }
            break;

        case 2:
            printf("Drinks\n");
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}