Program 9.4 Revising the Program to Determine Tomorrow’s Date

// Program to determine tomorrow's date
// A better structured program that takes the entire process
// of determining tomorrow’s date and relegating it to a
// separate function, dateUpdate.
// This solution shows better placement of function prototypes

#include <stdio.h>
#include <stdbool.h>
struct date
{
int month;
int day;
int year;
};
struct date dateUpdate (struct date today);      /* function prototype */ 
int numberOfDays (struct date d);                 /* function prototype */
bool isLeapYear (struct date d);        /* function prototype */

int main (void)
{
    
struct date thisDay, nextDay;

printf ("Enter today's date (mm dd yyyy): ");
scanf ("%i%i%i", &thisDay.month, &thisDay.day,
&thisDay.year);

    // invoke dateUpdate 
// a data structure is returned to nextDay (which is of
// type struct date)

nextDay = dateUpdate (thisDay); 
printf ("Tomorrow's date is %i/%i/%.2i.\n",nextDay.month,
nextDay.day, nextDay.year % 100);

return 0;
}

// Function to calculate tomorrow's date
struct date dateUpdate(struct date today) 
{
struct date tomorrow;
if ( today.day != numberOfDays (today) ) {  // testing for within this month
tomorrow.day = today.day + 1;
tomorrow.month = today.month;
tomorrow.year = today.year;
}
else if ( today.month == 12 ) {          
tomorrow.day = 1;           // it’s end of year         
tomorrow.month = 1;
tomorrow.year = today.year + 1;
}
else {                      // it’s end of month
tomorrow.day = 1;
tomorrow.month = today.month + 1;
tomorrow.year = today.year;
}
return tomorrow;
}   /* end function dateUpdate */

// Function to find the number of days in a month
int numberOfDays (struct date d)
{
int days;
const int daysPerMonth[12] =
{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
if ( isLeapYear && d.month == 2 )
days = 29;
else
days = daysPerMonth[d.month - 1];
return days;
}   /* end function numberOfDays */

// Function to determine if it's a leap year
bool isLeapYear (struct date d)
{
bool leapYearFlag;
if ( (d.year % 4 == 0 && d.year % 100 != 0) ||
d.year % 400 == 0 )
leapYearFlag = true; // It's a leap year
else
leapYearFlag = false; // Not a leap year
return leapYearFlag;
} /* end function isLeapYear */


