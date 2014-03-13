#include <stdio.h>

int main (void)
{
	int integerVar = 100;
	float floatingVar = 331.79;
	double doubleVar = 8.44e+11;
	char charVar = 'W';

	_Bool boolVar = 1;

	long int numberOfPoints = 131071100L;

	printf("integerVar = %d\n", integerVar);
	printf("floatingVar = %f\n", floatingVar);
	printf ("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("charVar = %c\n", charVar);

	printf("boolVar = %i\n", boolVar);
	printf("numberOfPoints = %li\n", numberOfPoints);
	printf("numberOfPoints = %lo\n", numberOfPoints);
	printf("numberOfPoints = %lx\n", numberOfPoints);
	return 0;
}
