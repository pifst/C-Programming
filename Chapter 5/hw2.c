// Chapter 5 HW #2

#include <stdio.h>

int main (void)
{

	int n, squared;

	printf ("Table of Squares\n");
	printf ("---------------\n");
	printf (": N       N^2 :\n");
	printf ("---------------\n");

	squared = 0;

	for ( n =1; n <= 10; ++n ) {
		squared = n * n ; // same as squared = squared + 1
		// n = n + 1 // ++ n // n++
		//n = n -1 // --n // n--
		printf (" %2i       %3i\n", n, squared);
	}
	return 0;
}