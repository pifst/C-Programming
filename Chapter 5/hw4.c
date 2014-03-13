// Chapter 5 HW #4

#include <stdio.h>

int main (void)
{

	int n, factorial = 1;
	printf ("-------------------\n");
	printf (":  Triangular #'s :\n");
	printf ("-------------------\n");
	printf (": N          Fact!:\n");
	printf ("-------------------\n");


	for ( n = 1; n <= 10; ++n ) {
		factorial =  factorial * n;


		// same as factorial = factorial + 1
		// n = n + 1 // ++ n // n++
		//n = n -1 // --n // n--
		printf (" %2i       %7i\n", n, factorial);
	}
	return 0;
}
