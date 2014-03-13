// Program 4.5
// Converting Between Integers & Floats

#include <stdio.h>

int main (void)
{

	float z = 123.125, f2;
	int   i1, i2 = -150;
	char  c = 'a';

	i1 = z;	// floating to integer conversion
	printf ("%f assigned to an int produces %i\n", z, i1);

	z = i2;	// floating to integer conversion
	printf ("%i assigned to a float produces %f\n", i2, z);

	z = i2 / 100;	// integer divided by integer
	printf ("%i divided by 100 produces %f\n", i2, z);

	f2 = i2 / 100.0;  // integer divided by a float
	printf ("%i divided by 100.0 produces %f\n", i2, f2);

	f2 = (float) i2 / 100;  // type cast operator
	printf ("(float) %i divided by 100 produces %f\n", i2, f2);
	
	return 0;
}