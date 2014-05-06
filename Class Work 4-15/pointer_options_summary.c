#include<stdio.h>
#define NUMELEMS 7
int main ()
{        

    double rates[NUMELEMS] = {6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 7.8};
    int total = 0, i;
    double *nPt;
    nPt = rates;
    printf("The rates list follows:\n");
    for (i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", *nPt++);      // pointer arithmetic notation
    nPt = rates;
    printf("\n");

    for (i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", *(nPt +i));       // pointer reference notation
    printf("\n");
    
    for (i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", *(rates + i));
    printf("\n");

    for (i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", rates[i]);        //  array subscript notation


    return 0;
}


Note: Although array names and pointers may be used interchangeably the following is NOT VALID:

    for (i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", *rates++);        // pointer arithmetic notation

The reason for this is that rates has not been declared as a pointer, therefore arithmetic can not be done on the address in this case.
