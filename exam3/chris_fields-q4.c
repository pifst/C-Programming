#include <stdio.h>
int calculate_length(char *string);

int main()
{
   char str[50];
   int str_length;

   printf ("Please enter your first and last name: ");
   gets(str);
   str_length = calculate_length(str);

   printf("You entered: %s, was %d characters long", str, str_length);

   return(0);
}

int calculate_length(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}