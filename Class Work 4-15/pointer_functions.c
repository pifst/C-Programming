/* Write a C program that has a declaration in main( ) to store the following numbers
     Into an array named rates: 6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10.0. There should be a
     Function call to show( ) that accepts rates in a parameter named rates and displays
     The numbers using pointer reference notation  *(rates +i).  */
#include <stdio.h>
#define NUMELS 9
void show (double *ratesptr, int num);
int main ()
{       
    double rates[] = {6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10.0};
    show(rates, NUMELS);
    return 0;
}
void show (double *ratesptr, int num)
{
        int i;
    for (i = 0; i<num; i++){
        printf("\n%li ", ratesptr + i );
        printf("\n%6.1f", *(ratesptr + i));
    }
}


/* Modify the show( ) function in the question above to alter the address in rates. 
     Use the “pointer arithmetic”expression  *rates  rather than  *(rates + i) to retrieve the element.  */
#include <stdio.h>
#define NUMELS 9
void show (double *ratesptr, int num);
int main ()
{ 
    double rates[] = {6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10.0};
    show(rates, NUMELS);
    return 0;
}
void show (double *ratesptr, int num)
{
        int i;
    for (i = 0; i<num; i++){
                    printf("\n%li ", ratesptr);
        printf("\n%6.1f", *ratesptr++);

    }
}

