#include <stdio.h>
#include <math.h>
#define pi 3.14159

struct circle
{
    float diameter;
    float area;
};

struct circle computeArea(struct circle instance){
    instance.area = powf ( (pi * (instance.diameter * .5)), 2 );
    return instance;
}

int main(void)
{
    struct circle instance;
    printf ("Enter the diameter: ");
    scanf ("%f", &instance.diameter);

    instance = computeArea(instance);

    printf ("The area of the circle is: %f", instance.area);
}


