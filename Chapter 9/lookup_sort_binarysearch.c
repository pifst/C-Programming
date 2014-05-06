
// Lookup Program Using a Binary Search 
// In this version the arrays are not in sorted order; therefore function sort
// is called to sort the arrays prior to performing the binary search
#include<stdio.h>
void sort(int prid[ ], float price[ ], int n);       // function prototype
int lookup(int item[], int num_entries, int target); // function prototype
int main( )
{
    const int entries = 10;
    int product_num[10] = {1550, 1950, 1510, 1000, 1100, 1450, 1200, 1500, 1300, 1400};
    float unit_price[10] = {29.55, 15.99, 5.95, 2.50, 3.75, 19.99, 1.99, 10.50, 2.25, 7.75};
    int searchnum, index;
    sort (product_num, unit_price, entries);        /* call sort function */
    printf("Enter a product number to be looked up:\n");
    scanf("%i", &searchnum);
    index = lookup(product_num, entries, searchnum);// call lookup to find product num
    if(index == -1)
        printf("Product Number %i Does Not exist in List\n", searchnum);
    else
        printf("Product Number %i Unit price = $%-7.2f\n",
            product_num[index], unit_price[index]);
    return 0;
}

void sort(int prid[ ], float price[ ], int n)
{
   /* Function to sort a passed array in descending order */
    int i, j, temp;
    float ftemp;
    for(i=0; i<n-1; ++i)
          for(j = i+1; j < n; ++j)
                 if(prid[i] > prid[j])
                {               
            /* swap product id elements */
                        temp = prid[i];  
                    prid[i] = prid[j];
                        prid[j] = temp;

            /* swap the price elements */
                        ftemp = price[i];  
                        price[i] = price[j];
                        price[j] = ftemp;
                }
        return;
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
                 upper =  middle - 1;                   /* use lower part of array  */
          else                                                  /* lower means element #0   */
                    lower =  middle + 1;                     /* use upper part of array  */
         middle  =  (upper + lower)/2;              /* recompute new mid point  */
     }                                 /*  end of while loop       */
    if (lower > upper)
        return -1;              /*  not found   return a -1  */
 else
         return middle;         /* return index to found value */   

return 0;
}