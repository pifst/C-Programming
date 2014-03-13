#include <stdio.h>

int main (void)
{
	int a;
	float b = 5.0;
	int c = 12;
	a = c % b;

	printf("%d, %f, %d", a, b, c);
}