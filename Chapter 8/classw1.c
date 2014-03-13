#include <stdio.h>

float findAbs(float num){
	if (num < 0) {
		num = -num;
	}
	return num;
}

int main (void){

    printf ("Answer: %f", findAbs(-1.4));
}