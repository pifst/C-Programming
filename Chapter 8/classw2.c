#include <stdio.h>
int powfun(int num, int exp);


int main(void){
    printf ("Answer: %i\n", powfun(2, 4) );
}

int powfun(int base, int expon){
	int result = 1;
  	for (int i = 0; i < expon; ++i)
  		result = result * base;
	return result;
}