#include <stdio.h>

int main(void){
    char name[40];
    printf ("Enter your name:\n");
    scanf ("%s", name);// will only capture until white space; eg 'Chris Fields' -> 'Chris'
    printf ("%s", name); 

    return 0;
}