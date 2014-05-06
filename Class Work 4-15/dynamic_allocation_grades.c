#include <stdio.h>
#include <stdlib.h>
int main ()                          /* program to dynamically allocate an array */
{
    int numgrades, i;
    int *grades;  // declare pointer
    printf("\nEnter the number of grades to  be processed:\n");
    scanf("%i", &numgrades);
    grades = (int *) malloc(numgrades * sizeof(int));   // allocate memory
    if (grades == NULL)
    {
        printf("\nMemory not allocated -- program aborted\n");
        exit (1);
    }
    for(i=0;  i<numgrades; ++i)
    {
        printf("Enter a grade:\n");
        scanf("%i", &grades[i]);
    }
    printf("\nAn array was created for %i grades\n", numgrades);
    printf("\n The values stored in the array are:\n");
    for(i=0; i<numgrades; ++i)
        printf(" %i\n", grades[i]);
    
    free (grades);  // return memory to heap
    return 0;
}
//      printf(" %i\n", *(grades + i));
// Alternative Version Using Pointer Arithmetic to Move Input into Array
#include <stdio.h>
#include <stdlib.h>
int main ()                      /* program to dynamically allocate an array */
{
    int numgrades, i, agrade;
    int *grades;  // declare pointer
    int *savgrptr;  // declare save pointer
    printf("\nEnter the number of grades to  be processed:\n");
    scanf("%i", &numgrades);
    grades = (int *) malloc(numgrades * sizeof(int));   // allocate memory
    savgrptr = grades;      // save pointer to array memory
    if (grades == NULL)
    {
        printf("\nMemory not allocated -- program aborted\n");
        exit (1);
    }
    for(i=0;  i<numgrades; ++i)
    {
        printf("Enter a grade:\n");
        scanf("%i", &agrade);       // input a grade
        *grades++ = agrade;     // move it into array & bump up pointer
        
    }
    printf("\nAn array was created for %i grades\n", numgrades);
    printf("\n The values stored in the array are:\n");
    grades = savgrptr;      // restore pointer to array memory
    for(i=0; i<numgrades; ++i)
        printf(" %i\n", grades[i]);
    
    free (grades);  // return memory to heap
    return 0;
}
// Alternative Version Using Pointer Arithmetic for Input & Output
#include <stdio.h>
#include <stdlib.h>
int main ()                      /* program to dynamically allocate an array */
{
    int numgrades, i, agrade;
    int *grades;  // declare pointer
    int *savgrptr;  // declare save pointer
    printf("\nEnter the number of grades to  be processed:\n");
    scanf("%i", &numgrades);
    grades = (int *) malloc(numgrades * sizeof(int));   // allocate memory
    savgrptr = grades;      // save pointer to array memory
    if (grades == NULL)
    {
        printf("\nMemory not allocated -- program aborted\n");
        exit (1);
    }
    for(i=0;  i<numgrades; ++i)
    {
        printf("Enter a grade:\n");
        scanf("%i", &agrade);       // input a grade
        *grades++ = agrade;         // move it into array & bump up pointer
        
    }
    printf("\nAn array was created for %i grades\n", numgrades);
    printf("\n The values stored in the array are:\n");
    grades = savgrptr;      // restore pointer to array memory
    for(i=0; i<numgrades; ++i)
        printf(" %i\n", *grades++);
    
    free (grades);  // return memory to heap
    return 0;
}
//      printf(" %i\n", *(grades + i));
