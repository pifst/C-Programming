// Chapter 4, Exercise #4.
#include <stdio.h>

int main(void)
{
	float F = 27, C;

	C = (F - 32) / 1.8;
	printf("%.2f degree F equals %.2f degree Celsius\n", F, C);

	return 0;
}