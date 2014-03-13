/* Program to find the greatest common divisor
 of two nonnegative integer values */
#include <stdio.h>

int main (void)
{
	int u, v, temp;

	printf ("Please type in two nonnegative integers:\n");
	scanf ("%i", &u);
	scanf ("%i", &v);
	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}
	printf ("Their greatest common divisor is %i\n", u);

	return 0;
}
