 
#include <stdio.h>

int main (void){
  int counter, n, input_total_triangles, input_number, triangular_number;

  printf("How many triangular numbers do you want to compute?");
  scanf("%i", &input_total_triangles);

  for (counter = 1; counter <= input_total_triangles; ++counter){ 
    printf("\nWhat triangular number do you want? ");
    scanf("%i", &input_number);

    triangular_number = 0; // also declable at top
    for (n = 1; n <= input_number; ++n)
      triangular_number = triangular_number + n;
      // triangular_number += n;
      printf("\nTriangular number %i is  %i \n\n", input_number, triangular_number);
  }
  return 0;
 }
