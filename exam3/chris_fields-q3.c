#include <stdio.h>

#define MAXIMUMITERATIONS 3

struct analysis
{
    char  companyName[80];
    int  pizzaDiameter;
    float pizzaWeight;
}Pizza[MAXIMUMITERATIONS];

int fillStruct( struct analysis Service[] );
void displayStruct(struct analysis Service[]);



int main(void)
{
    printf ("Welcome, please enter the following information:\n");
    printf ("1. Name of Pizza Company\n2. Diameter of it's Pizza\n3. Weight of it's Pizza\n");
    fillStruct(Pizza);
    displayStruct(Pizza);
}

int fillStruct( struct analysis Service[] )
{
    int i;
    for ( i = 0; i < MAXIMUMITERATIONS; ++i ) {

        printf ("\n\n\tName of Company: ");
        scanf  ("%[^\n]", &Service[i].companyName );
        // '"%[^\n]' breaks the following return
        
        printf ("\tEnter pizza's Diameter: ");
        scanf  ("%i", &Service[i].pizzaDiameter);

        printf ("\tEnter pizza's Weight: ");
        scanf  ("%f", &Service[i].pizzaWeight);
    }

}

void displayStruct(struct analysis Service[] )
{
    int i;
    for (i = 0; i < MAXIMUMITERATIONS; ++i ) {
        printf ("\t Name of Pizza Company:\t%s\n", Service[i].companyName);
        printf ("\t Diameter of pizza:    \t%2i inches\n", Service[i].pizzaDiameter);
        printf ("\t Weight of pizza:      \t%2.2f lbs\n", Service[i].pizzaWeight);
    }
    
    
}