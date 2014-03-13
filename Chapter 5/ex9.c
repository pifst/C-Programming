// Program to revese the digits of a number.
#include <stdio.h>

int main ()
{
	int number, right_dight;
	printf ("Enter your number.\n");
	scanf ("%i", &number);

	do {
		right_dight = number % 10;
		printf("%i", right_dight);
		number = number / 10;
	}
	while ( number != 0 );

	printf ("\n");

	return 0;
}