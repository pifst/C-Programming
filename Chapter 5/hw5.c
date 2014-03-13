// Chapter 5 HW #5

#include <stdio.h>

int main (void)
{
	int n, nSquared = 1;

	printf ("Table of Powers of Two\n\n");
	printf (" n      2 to the n\n");
	printf ("---     ---------\n");

	for ( n = 0; n <= 10; ++n ) {
		printf ("%2i        %3i\n", n, nSquared);
		nSquared *=2;
	}

	return 0;
}
