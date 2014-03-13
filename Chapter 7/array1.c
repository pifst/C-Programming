#include <stdio.h>
#define nelm 9

int main (void)
{
	
    float min, max, rates[nelm] = {12.3, 7.2, 10.0, 8.3, 8.6, 17.2, 9.4, 9.8, 14.5};
	int i;
	
	printf ("#\t\tArray\n");    
	for (i=0; i < nelm; ++i) 
		printf( "%1.1i \t\t %5.1f \n", i, rates[i] );
	printf("\n");

	for (i=0; i < nelm; ++i) 
		if (rates[i] > max) {
			max = rates[i];
		}
	for (i=0; i < nelm; ++i) 
		if (rates[i] < min) {
			min = rates[i];
		}
	
	printf ("Min: %2.1f | Max: %2.1f\n", min, max);
	return 0;
}
