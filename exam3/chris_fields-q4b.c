#include <stdio.h>
int calculate_length(char *string);

int main()
{
   char str[50];
   char str_last[50];
   int str_length;

   printf ("Please enter your first and last name: ");
   scanf("%s%s", &str[0], &str_last[0] );
   str_length = calculate_length(str) + calculate_length(str_last);

   printf("You entered: %s %s, was %d characters long", str_last, str, str_length);

   return(0);
}

int calculate_length(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}