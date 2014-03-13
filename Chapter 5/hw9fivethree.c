/*
// Program to generate a table of triangular numbers
#include <stdio.h>
int main (void)
{
	int n, triangularNumber;

	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n    Sum from 1 to n\n");
	printf ("---   ---------------\n");

	triangularNumber = 0;

	for ( n =1; n <= 10; ++n ) {
		triangularNumber += n ; // same as triangularNumber = triangularNumber + 1
		// n = n + 1 // ++ n // n++
		//n = n -1 // --n // n--
		printf (" %2i              %i\n", n, triangularNumber);
	}
	return 0;
}
*/

#include <stdio.h>

int main (void)
{
	int n = 1;
	int triangularNumber = 0;
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n    Sum from 1 to n\n");
	printf ("---   ---------------\n");

	

	while ( n <= 10 ) {
		triangularNumber += n;
		printf (" %2i              %i\n", n, triangularNumber);
		++n;
	}
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