// Program to introduce the while statement
/*
For statements;
	for ( init_expression; loop_condition; loop_expression )
		program statement
		
Can be expressed as a While statement by;
	init_expression;
	while ( loop_condition ) {
		program statement
		loop_expression;
	}
*/

#include <stdio.h>

int main (void)
{
	int count = 1;

	while ( count <= 5) {
		printf ("%i\n", count);
		++count;
	}

	return 0;
}