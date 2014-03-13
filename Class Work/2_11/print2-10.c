#include <stdio.h>
#include <math.h>

int main ()
{
	int range_start = 10, range_end = 20, count;
	count = range_end - range_start;

	while ( count < range_end ){
		printf("# %i\n", count);
		count = count + 2;
	}

	printf("end\n");
	return 0;
}
