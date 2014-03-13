#include <stdio.h>
int powfun(int base, int expon);
int table(void);



int main(void){
    table();
}

int table(void){
	printf ("   1,  2,    3\n");
	printf ("--------\n");	
	for (int i = 1; i <= 10; ++i)
		printf ("%3i, %3i, %4i\n", i, powfun(i, 2), powfun(i, 3) );
}


int powfun(int base, int expon){
	int result = 1;
  	for (int i = 0; i < expon; ++i)
  		result = result * base;
	return result;
}