// Generate Fibonacci NUmbers using variable length arrays

#include <stdio.h>

int main (void) {

	int i, numFibs;

	printf ("How many Fibonacci numbers do you want (between 1 & 75)? ");
	scanf  ("%i", &numFibs);

	if ( numFibs < 1 || numFibs > 75 ) {
		printf ("Bad number, sorry!\n");
		return 1;
	}

	unsigned long long int Fibonacci[numFibs];

	Fibonacci[0] = 0;	// First
	Fibonacci[1] = 1;	// Second

	for ( i = 2; i < numFibs; ++i )
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

	for ( i = 0; i < numFibs; ++i )
		printf ("%llu	", Fibonacci[i]);	// %llu - converts unsigned decimal integer to X.Y format

	printf ("\n");
	return 0;
}