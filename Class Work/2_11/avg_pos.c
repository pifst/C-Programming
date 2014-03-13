#include <stdio.h>
int main()
{
	int number, sum = 0, count = 0;
	float ave;
	while(1)
	{
		printf("Enter a number:\n");
		scanf("%i", &number);
		if (number > 0)
			break;
		sum = sum + number;
		++count;
	}

	ave = (float)sum/count;
	printf("The average of the %i numbers", number);
	
	return 0;
}