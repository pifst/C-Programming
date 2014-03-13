// Convert Celcius to Farneheight.
#include <stdio.h>

int main(void)
{	
	float f, c = -10;

	// for ( int_expression; loop_condition; loop_expression )
	//		loop statements
	// C = (F - 32) / 1.8;
	while ( c <= 60){
		f = (9.0 / 5.0) * (float)c + 32;
		printf ("%6.1f degree Celsius equals %6.1f degree Farenheight.\n", c, f);
		c = c + 10;
	}
	return 0;
}