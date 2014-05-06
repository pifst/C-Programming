// Christopher Fields
// Question #5
#include <stdio.h>

float calculatePrice (int units);

int main(void)
{
    int amount;
    float finalCost;

    printf ("How many units do you want to purchase?");
    scanf ("%i", &amount);

    finalCost = calculatePrice(amount);

    printf("The purchase price for %i software units is $%5.2f.\n", amount, finalCost);
}

float calculatePrice(int units)
{
    float cost;

    if ( units >= 1 && units <= 19 ) {
        // no discount
        cost = units * 75.00;
    }
    else if ( units >= 20 && units <= 49 ) {
        // 20% discount
        cost = units * 75.00 * (.80);
    }
    else if ( units >= 50 && units <= 99 ) {
        // 30% discount
        cost = units * 75.00 * (.70);
    }
    else if ( units >= 100 ) {
        // 40% discount
        cost = units * 75.00 * (.60);
    }
    else {                     
        printf ("Bad data; retry input.");
    }
    return cost;
}