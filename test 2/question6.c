// Christopher Fields
// Question #5

#include <stdio.h>
#define NUM 6

void  calcSalePrice (float price[], float discount[], float totalPrice[]);
void  displayArrays (float array1[], float array2[], float array3[]);

int main(void)
{
    float price[]     = { 100.00, 59.95, 215.75, 39.99, 25.00, 329.99 };
    float discount[]  = { 0.25, 0.20, 0.30, 0.25, 0.30, 0.20 };

    float totalPrice[NUM];

    calcSalePrice(price, discount, totalPrice);
    displayArrays(price, discount, totalPrice);
}

void calcSalePrice(float price[], float discount[], float totalPrice[])
{
    int i;
    for (i = 0; i < NUM; ++i)
        totalPrice[i] = price[i] * ( 1.00 - discount[i] );
}

void  displayArrays(float array1[], float array2[], float array3[])
{
    int i;

    printf ("\t-----------------------------\n");
    printf ("\tPrice : Discount : Sale Price\n");
    printf ("\t-----------------------------\n");
    for (i = 0; i < NUM; ++i) {
        printf ("\t%3.2f\t  %1.2f\t  %3.2f \n", array1[i], array2[i], array3[i]);
    }
    printf ("\t-----------------------------\n\n");
}