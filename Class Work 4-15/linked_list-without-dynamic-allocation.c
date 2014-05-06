// This program creates a linked list without Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
int main ( )
{
    struct idrec
    {
        int number;
        struct idrec *nextaddr;
    };
    struct idrec n1, n2, n3, n4;
    struct idrec *headptr, *curptr;
    n1.number = 100;        // assign values to members of nodes
    n2.number = 200;
    n3.number = 300;
    n4.number = 400;
    n1.nextaddr = &n2;      // create linked list
    n2.nextaddr = &n3;
    n3.nextaddr = &n4;
    n4.nextaddr = NULL;
    headptr = &n1;          // set head pointer to point to start of list
    printf("Contents of linked list follow:\n");
    curptr  = headptr;
    while (curptr != NULL)
    {
        printf("%i\n", curptr->number);  // display numbers from list
        curptr = curptr->nextaddr;  // bump up pointer to point to next 
    }
    return 0;
}
output: 
Contents of linked list follow:
100
200
300
400

