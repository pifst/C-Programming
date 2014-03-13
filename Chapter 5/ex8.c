/*
	Do statement tests conditions after the loop is executed (for & while test first)
	Program to revesre the digits of a number

// Best to save Break/Continue for advanced statements.
	Break allows the exit of loop upon condition
	Continue; bypasses group of statements inside loop; otherwise continues loop.
*/

#include <stdio.h>

int main()
{
	int number, right_digit;

	printf ("Enter your number.\n");

	scanf("%i", &number);

	do {
		right_digit = number % 10;
		printf ("%i", right_digit);
		number = number / 10;
	}
	while ( number != 0 );

	printf ("\n");

	return 0;
}