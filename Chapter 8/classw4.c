#include <stdio.h>
#define ITEMS 10
void calcAmount(double one[], double two[], double three[]);
void printArrays(double one[], double two[], double three[]);

void calcAmount(double one[], double two[], double three[]){

	for (int i = 0; i < ITEMS; ++i ) {
		three[i] = one[i] * two[i];
	}
}

void printArrays(double one[], double two[], double three[]){
    for (int i = 0; i < ITEMS; ++i) {
        printf ("\t%2.2f   %2.2f     %3.2f \n", one[i], two[i], three[i] );
    }
}

int main(void) {
    double price[] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double quantity[] = { 4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.9};
    double amount[ITEMS];
    calcAmount( price, quantity, amount );
    printArrays( price, quantity, amount );
    
}
