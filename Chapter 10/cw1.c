// write program to declare array of pointers for day of the week
// prompt user day of week [0-6]
// display the day of the week.

#include <stdio.h>

int main(void)
{
    char *days[] = 
    { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

    int usersDay;

    printf ("What day would you like? (0-6): ");
    scanf ("%i", &usersDay);

    printf ("The day of the week is %s\n", days[usersDay]);
    return 0;
}