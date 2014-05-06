#include <stdio.h>
int main ( )
{           /* create a linked list using dynamic memory allocation  */
    struct idrec
    {
        int number;
        struct idrec *nextaddr;
    };
    struct idrec *headptr, *curptr, *temptr;
    /* temptr point to the record we are allocating
       curptr points to the place we are in the linked list  */
    int i, nrecs;
    printf("How many records?\n");
    scanf("%i", &nrecs);
    for(i = 1; i<=nrecs; ++i)
    {
        if(i == 1)
        {       headptr = malloc(nrecs * sizeof(struct idrec));
            temptr = headptr;
            curptr = headptr;
        }
        else
            temptr = malloc(nrecs * sizeof(struct idrec));

        curptr->nextaddr = temptr;  /* hook up to new node */
        printf("Enter a number:\n");    /* put data in new node */
        scanf("%i", &temptr->number);
        temptr->nextaddr = NULL;
        curptr = temptr;    /* set curptr to point to last one */
    }
    curptr = headptr;       /* set curptr to start of list  */
    while(curptr != NULL)
    {
        printf("%i\n", curptr->number);
        curptr = curptr->nextaddr;
    }
    return 0;
}


