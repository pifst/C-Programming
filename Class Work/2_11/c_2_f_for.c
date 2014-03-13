// Chapter 4, Exercise #4.
#include <stdio.h>

int main(void)
{	
	int c;
	float f;

	// for ( int_expression; loop_condition; loop_expression )
	//		loop statements
	// C = (F - 32) / 1.8;
	for ( c = -10; c <= 60; c = c + 10 )
		f = (9 / 5) * c + 32;
		printf ("%i degree Celsius equals %.2f degree Farenheight.\n", c, f);

	return 0;
}