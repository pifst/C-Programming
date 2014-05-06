// Lookup Program Using a Binary Search
#include<stdio.h>
int lookup(int item[], int num_entries, int target);
int main( )
{
    const int entries = 10;
    int product_num[10] = {1000, 1100, 1200, 1300, 1400, 1450, 
                1500, 1510, 1550, 1950};
    float unit_price[10] = {2.50, 3.75, 1.99, 2.25, 7.75, 19.99, 10.50, 
                     5.95, 29.55, 15.99};
    int searchnum, index;
    printf("Enter a product number to be looked up:\n");
    scanf("%i", &searchnum);
    index = lookup(product_num, entries, searchnum);// call lookup to find product num
    if(index == -1)
        printf("Product Number %i Does Not exist in List\n", searchnum);
    else
        printf("Product Number %i Unit price = $-7.2f\n",
            product_num[index], unit_price[index]);
    return 0;
}

int lookup(int item[], int num_entries, int target)
{
int upper, lower, middle;
lower = 0;
upper = num_entries  - 1;
middle = (upper + lower)/2;
/*  Loop until value is found or entire list has been searched.       */
 while ((lower <= upper) && (target != item[middle]))
  {
    if (target < item[middle])
        upper =  middle - 1;                    /* use lower part of array  */
    else                                        /* lower means element #0   */
        lower =  middle + 1;                     /* use upper part of array  */
    middle  =  (upper + lower)/2;            /* recompute new mid point  */
  }                                                 /*  end of while loop       */
 if (lower > upper)
   return -1;               /*  not found   return a -1  */
 else
   return middle;           /* return index to found value */   

return 0;
}