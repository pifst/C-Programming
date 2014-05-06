#include<stdio.h>
#define NUMELEMS 7
int main ()
{        

    double rates[NUMELEMS] = {6.25, 6.50, 6.8, 7.2, 7.5, 7.65, 7.8};
    int i;
    double *ratesPtr;
    
    printf("The rates list using subscript notation:\n");
    for (i = 0; i < NUMELEMS; i++)
    printf("%7.2f\n", rates[i]);

    printf("\nThis rates list uses pointer notation, incrementing the index.\n"
        "The array name is used as a pointer, but its address is not changed.\n"
        "The address used to retrieve the data is computed as the address of \n"
        "the 1st element plus the index followed by indirection, at data \n"
        "retrieval time. The address of the 1st element is not changed,i.e., rates\n" 
        "still points to the 1st element.\n");
    for (i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", *(rates + i));

    printf("\n\nThis list uses pointer notation, incrementing the pointer.\n"
           "Note that in this case we did not use  pointer notation; that is \n"
        "we did not use *rates. Using *rates++ will not work because rates has not \n"
        "been declared as a pointer type (it is an array which provides the address \n"
        "of the array but rates has not been declared to be a pointer). Therefore, \n"
        "we need to delclare a pointer such as *ratesPtr and assign rates, the \n"
        "address, to *ratesPtr prior to using it. We can then do arithmetic on \n"
        "*ratesPtr, because it was declared to be a pointer\n");
    ratesPtr = rates;           // set the pointer to the array address
    for(i = 0; i < NUMELEMS; i++)
        printf("%7.2f\n", *ratesPtr++);
        
    return 0;
}

output: 
The rates list using subscript notation:
   6.25
   6.50
   6.80
   7.20
   7.50
   7.65
   7.80

This rates list uses pointer notation, incrementing the index.
The array name is used as a pointer, but its address is not changed.
The address used to retrieve the data is computed as the address of 
the 1st element plus the index followed by indirection, at data 
retrieval time. The address of the 1st element is not changed,i.e., rates
still points to the 1st element.
   6.25
   6.50
   6.80
   7.20
   7.50
   7.65
   7.80


This list uses pointer notation, incrementing the pointer.
Note that in this case we did not use  pointer notation; that is 
we did not use *rates. Using *rates++ will not work because rates has not 
been declared as a pointer type (it is an array which provides the address 
of the array but rates has not been declared to be a pointer). Therefore, 
we need to delclare a pointer such as *ratesPtr and assign rates, the 
address, to *ratesPtr prior to using it. We can then do arithmetic on 
*ratesPtr, because it was declared to be a pointer
   6.25
   6.50
   6.80
   7.20
   7.50
   7.65
   7.80

