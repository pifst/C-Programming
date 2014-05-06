#include <stdio.h>

int main(void) {
    char name[80];

    printf("Input your name: ");
    scanf("%[^\n]s", name);
    printf("your name is!...\n\t %s\n", name);
    gets(name); // depreciated in GCC - use fgets
    // https://stackoverflow.com/questions/456303/how-to-validate-input-using-scanf?lq=1
        printf("your name is!...\n\t %s\n", name);
    return 0;
}