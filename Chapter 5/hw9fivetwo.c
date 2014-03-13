/*
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
*/

#include <stdio.h>

int main (void)
{
	int n = 1;
	int triangularNumber = 0;

	while ( n <= 200 ) {
		triangularNumber = triangularNumber + n;
		++n;
	}
	printf ("The 200th triangular number is %i\n", triangularNumber);
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