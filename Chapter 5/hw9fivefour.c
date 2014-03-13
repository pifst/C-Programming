/* 
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
*/

#include <stdio.h>

int main (void)
{
	int n = 1, number, triangularNumber = 0;
	
	printf ("What triangular number do you want?");
	scanf ("%i", &number);

	while ( n <= number ) {
		triangularNumber += n;
		++n;
	}

	printf ("Triangular number %i is %i\n", number, triangularNumber);

	return 0;
}

/*
// for
for ( init_expression; loop_condition; loop_expression )
	program statement

// while
init_expression
while ( loop_condition) {
	program statement
	loop_expression;
}
*/