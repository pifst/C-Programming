#include <stdio.h>
#include <math.h>

int main ()
{
	int test_score, sum, test_count, count;
	float average;
	sum = 0;
	count = 0;
	test_count = 5;

	printf("Enter %i test scores to get the sum.\n", test_count);

	while ( count < test_count ){
		printf("Number %i:", count + 1);
		scanf("%i", &test_score);
		sum = sum + test_score;
		++count;
	}

	average = (float)sum / test_count;
	printf("The average of %i tests was: %3.1f\n", test_count, average);

	return 0;
}
