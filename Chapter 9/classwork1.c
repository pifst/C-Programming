#include <stdio.h>
#include <math.h>

int main(void){

    float const pi = 3.14159;

    struct circle
    {
        float diameter;
        float area;
    };

    struct circle instance;
    printf ("Enter the diameter: ");
    scanf ("%f", &instance.diameter);

    instance.area = powf ( (pi * (instance.diameter * .5)), 2 );

    printf ("The area of the circle is: %f", instance.area);
}