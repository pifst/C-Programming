#include <stdio.h>
#define nelm 
#define nelm2

int main (void)
{
	
    float min, max;
    float price[`0] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};

    float quanity[10] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8}
    float amount[10]
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
