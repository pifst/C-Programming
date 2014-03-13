#include <stdio.h>

int main (void)
{
    int num1, num2, product;

    printf("Enter two numbers: ");
    scanf("%i %i", &num1, &num2);
    
    product = num1 * num2;
    printf("%i  *  %i equals:\t", num1, num2);
    printf("%i\n", product);

    return 0;
}