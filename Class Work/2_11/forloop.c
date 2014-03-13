
#include <stdio.h>

int main (void)
{
	int n;
	// for ( int_expression; loop_condition; loop_expression )
	//		loop statements
	for ( n = 10; n <= 20; n = n + 2 )
		printf ("# %i\n", n);

	return 0;
}