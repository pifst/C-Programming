    



      
#include <stdio.h>
int main ( )
{
    /* Program to illustrate the use of the sizeof operator */
    /* The sizeof opeartor can be used to determine how much 
       storage (main memory) your computer allocates for a data type.
       The sizeof( ) operator returns the number of bytes of the object
                 or data type included in the parenthesis. Unlike a function, which
       is made  up of C statements, the sizeof( ) operator is an integral 
       part of the C language itself. Examples of the sizeof( ) operator
       are:
        sizeof(int)    int is the keyword for integer type data
        sizeof(float)      float is the keyword for floating pt type data
        sizeof(varname)    varname is the name of a variable  */    

               int number;      /* Declare Variables */
    short int number2;
    float number3;
    double number4;
    int answer;
    float rates[] = {12.3, 7.2, 10.0, 8.3, 8.6, 17.2, 9.4, 9.8, 14.5};  /* declare and initialize array */

    /* Display the size of data types using the sizeof operator */
    /* directly in the printf statement. The size of the data type, */
    /* in bytes, is returned by the sizeof operator and sent */
    /* directly to print */
    printf("\nData Type  Bytes");   
    printf("\n---------  -----");
    printf("\nint           %i",sizeof(int));
    printf("\nchar          %i",sizeof(char) );     
              printf("\nfloat         %i",sizeof(float));
    printf("\ndouble        %i\n\n",sizeof(double));

    /* In the following examples the name of the variable is used */
    /* to get the size of the data type. The sizeof operator returns*/
    /* the number of bytes as a whole number, which is assigned to *
    /* variable named answer. The contents of answer is then displayed */
    /*Note that answer has to be an integer variable because the sizeof */
    /* operator returns the number of bytes as an integer value. */
    
    answer = sizeof(number);
    printf("size of an integer  variable =  %i bytes\n",answer);
    
    answer = sizeof(number2);
    printf("size of a short int variable =  %i bytes\n",answer);

    answer = sizeof(number3);
    printf("size of a float variable =  %i bytes\n",answer);
    
    answer = sizeof(number4);
    printf("size of a double variable =  %i bytes\n",answer);


    /*The following three examples illustrate how to get the size */    
    /* of an array in bytes and the number of elements in the array */
    /* Note, that to get the number of elements we need to divide */
    /* number of bytes for the array by the size of teh data type*/
    
    printf("\nThe size of the array rates in bytes = %i\n", sizeof(rates));
    printf("Number of elements in array rates = %i\n", sizeof(rates)/4);
    
    /* Note in the following example, we use sizeof to divide into the */
    /* number of bytes, instead of using 4. This is a better solution */
    /* because we let the sizeof operator determine the size of float */
    /* instead of the programmer. */

    printf("Number of elements in array rates = %i\n", sizeof(rates)/sizeof(float));

    return 0;
}
      


Data Type  Bytes
---------  -----
int           4
char          1
float         4
double        8

size of an integer  variable =  4 bytes
size of a short int variable =  2 bytes
size of a float variable =  4 bytes
size of a double variable =  8 bytes

The size of the array rates in bytes = 36
Number of elements in array rates = 9
Number of elements in array rates = 9


