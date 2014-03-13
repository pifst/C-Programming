#include <stdio.h>
int main(void)
{
	// Needs a better data structure
	int i, ia = 365, ib = 12258, ic = 996;
	int j, ja = 7, jb = 23, jc = 4;

	printf("Multiple = I, J\n\n");

	i = ia;
	j = ja;
	printf("%i = %i, %i\n",(i + j - i % j), i, j);
	
	i = ib;
	j = jb;
	printf("%i = %i, %i\n",(i + j - i % j), i, j);
	
	i = ic;
	j = jc;
	printf("%i = %i, %i\n",(i + j - i % j), i, j);
	
}