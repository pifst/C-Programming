/* Write a C program that initializes an array named rates with the following 
     numbers: 6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 8.2, 8.4, 8.6, 8.8, 9.0.  Display the values
    in the array by changing the address of a pointer called disptr  (use pointer arithmetic notation).  
   Use a for statement  in your program to display the array.        */                                                                        
                                  
#include <stdio.h>
#define NUMELEM 11
int main ()
{
    double rates[NUMELEM] = {6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 8.2, 8.4, 8.6, 8.8, 9.0,};
    double *disptr, total = 0.0;
        int i;
        disptr = rates;
    for(i =0; i < NUMELEM; i++)
      
       printf("\n%7.2f", *disptr++);
    return 0;
}

-------------------------------------------------------------
#include <stdio.h>      /* now add up the values and display the sum  */
#define NUMELEM 11
int main ()
{
       double rates[NUMELEM] = {6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 8.2, 8.4, 8.6, 8.8, 9.0};
       double *disptr, total = 0.0;
        int i;
        disptr = rates;
        for(i =0; i < NUMELEM; i++)
          total += *disptr++;

        printf("The sum = %6.1f\n", total);
        return 0;
}


/* Modify the above program to use a while statement.  */

#include <stdio.h>
#define NUMELEM 11
int main ()
{
    double rates[NUMELEM] = {6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 8.2, 8.4, 8.6, 8.8, 9.0,};
    double *disptr, total = 0.0;
              disptr = rates;
    while (disptr < rates + NUMELEM)
       printf("\n%7.2f", *disptr++);
    return 0;
}

--------------------------------------------------------------------------------------------------------------
#include <stdio.h>  /* now add up the values and display the sum */
#define NUMELEM 11
int main ()
{
    double rates[NUMELEM] = {6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 8.2, 8.4, 8.6, 8.8, 9.0,};
    double *disptr, total = 0.0;
              disptr = rates;
    while (disptr < rates + NUMELEM)
        total += *disptr++;
    printf("The sum = %6.1f\n", total);
    return 0;
}
