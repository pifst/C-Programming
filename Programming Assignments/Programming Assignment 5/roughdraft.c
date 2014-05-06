#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x[4] = { 10, 20, 30, 40 };
    int y[4] = { 11, 21, 31, 41 };
    int *a;
    int *b;

    //a = (x+2);
    for (int i=0; i<4; ++i){
        printf ("%p", &x[i]);
        printf ("\n\n");
    }
    

    
}