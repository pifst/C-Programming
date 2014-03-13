// trap loop
#include <stdio.h>

int main()
{
	int number, toss;
	do
	{
		printf ("Enter a number from 1 to 25\n");
		scanf ("%i", &number);
		if (number <= 0 || number > 25)
			printf ("Number entered is out of range.\n");
	}
	while ( number <= 0 || number > 25);

	toss = number + 100;
	printf ("%d", toss);

	return 0;
}

/*
int main ()
{
	int number;
	printf("Enter a number from 1 to 25\n");
	scanf("%i", &number);
	while ( number <= 0 || number > 25){
		printf ("Number entered is out of range\n");
		scanf ("%i", &number);
	}
	printf ("Valid number is %i\n", number);
	return 0;
}
*/