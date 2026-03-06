#include <stdio.h>

int main() {
    float price = 2.25;
    int quantity = 5;
    float totalPrice = price * quantity;

    printf("You bought %d Apple's for £%.2f each. Total costs: £%.2f\n", quantity, price, totalPrice);

    return 0;
}
