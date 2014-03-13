// Chapter 5 HW #3

#include <stdio.h>

int main (void)
{

	int n, triangularNumber = 0;

	printf ("Triangular #'s\n");
	printf ("---------------\n");
	printf (": N      Tri# :\n");
	printf ("---------------\n");

	for ( n = 5; n <= 50; n += 5 ) {
		triangularNumber =  n * (n + 1) / 2; 

		// same as triangularNumber = triangularNumber + 1
		// n = n + 1 // ++ n // n++
		//n = n -1 // --n // n--
		printf (" %2i       %3i\n", n, triangularNumber);
	}
	return 0;
}