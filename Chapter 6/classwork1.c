// Program to implment the sign function

#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char marital_status;
	int exit = 0;

	printf ("Please type in the Marital Status: ");

	scanf ("%c", &marital_status);
	marital_status = toupper(marital_status);

	while (1) {
	    
		if ( marital_status == 'X')
			break;
		else if ( marital_status == 'M' )
			printf("Married; ");
		else if ( marital_status == 'S' )
			printf("Single; ");
		else if ( marital_status == 'D' )
			printf("Divorced; ");
		else if ( marital_status == 'W' )
			printf("Widowed; ");
		else
			printf("Unknown code. ");

		printf ("Sign = %c\n\n", marital_status);
	}
		printf (" Program ended with X.\n ");


	
    
	return 0;
}