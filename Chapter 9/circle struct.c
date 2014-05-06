Area of a Circle Using a Structure

Write a C program in which you will declare a structure definition for a circle, using the radius, diameter and area for member names.  In the main ( ) function of your program prompt the user for the diameter of a circle. Then determine the radius and the area of the circle, using the input diameter and store these items in the data structure.

Display the computed radius and area of the circle.

Use the following equation for the area of a circle:

    Area = 3.14159 * radius**2
You may use the pow standard library function.



#include<stdio.h>
#include<math.h>
#define PI 3.14159      // constant PI 
int main ()
{
    struct Circle
    {
        float radius;       // a circle's radius
        float diameter;     // a circle's diameter
        float area;     // a circle's area;
    };
    struct Circle acircle;      // define a structure variable

    printf("Enter the diameter of a circle:\n");
    scanf("%f", &acircle.diameter);
    acircle.radius = acircle.diameter / 2.0;
    acircle.area = PI * pow(acircle.radius, 2);    // compute area of circle
    // Display the circle data returned from the function
    printf("The radius of the circle = %7.2f\n", acircle.radius);
    printf("The area = %7.2f\n", acircle.area);
    return 0;
}
Area of a Circle Using a Structure – Use a function to compute radius & diameter
(Pass the Structure to a Function and have Function Return the Updated Structure)
Write a C program in which you will declare a structure definition for a circle, using the radius, diameter and area for member names.  In the main ( ) function of your program prompt the user for the diameter of a circle. Then invoke a function named computeArea to determine the radius and the area of the circle, using the input diameter. Pass the data structure to the function.
Return the updated data structure to main ( ) and display the three members of the structure from main ( ).
Use the following equation for the area of a circle:
Area = 3.14159 * radius**2
You may use the pow standard library function.

#include<stdio.h>
#include<math.h>
#define PI 3.14159      // constant PI 
// structure declaration   -- in Global
struct Circle
{
    float radius;       // a circle's radius
    float diameter;     // a circle's diameter
    float area;     // a circle's area;
};
struct Circle computeArea (struct Circle tempcircle);       // function prototype 
int main ()
{
    struct Circle acircle;      // define a structure variable
    /* In this program the diameter is input in main() 
       The function computeArea is then invoked, passing the data structure to it
       The function will determine the radius and area and return the updated
               structure of type Circle. The structure is passed by value to the function */

    printf("Enter the diameter of a circle:\n");
    scanf("%f", &acircle.diameter);
    acircle = computeArea(acircle);     // call the function
    // Display the circle data returned from the function
    printf("The radius of the circle = %7.2f\n", acircle.radius);
    printf("The area = %7.2f\n", acircle.area);
    return 0;
}
struct Circle computeArea (struct Circle tempcircle)
{
    tempcircle.radius = tempcircle.diameter / 2.0;
    tempcircle.area = PI * pow(tempcircle.radius, 2);    // compute area of circle
    return tempcircle;  // return updated circle data struct
}