#include <stdio.h>

int main (void)
{
	int number, triangularNumber;

	printf ("What triangular number do you want?");
	scanf ("%i", &number);

	triangularNumber = 0;

	for ( int n = 1; n <= number; ++n ) // n becomes local variable
		triangularNumber += n;
	printf ("Triangular number %i is %i\n", number, triangularNumber);

	return 0;
}