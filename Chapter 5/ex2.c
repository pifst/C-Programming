// Chapter 5 Exercise 2.
// Calculating the 200th Triangular Number

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;

	triangularNumber = 0;
	// for ( int_expression; loop_condition; loop_expression )
	//		loop statements
	for ( n = 1; n <= 200; n = n + 1 )
		triangularNumber = triangularNumber + n;

	printf ("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}

