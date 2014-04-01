/*---------------------------------
 *  Christopher Fields
 *  90.267 C Programming
 *  Programming Assignment #3
 *  4/2/2014
 *  Passing Arrays in Functions
 *----------------------------------*/

/*---------------------------------
 *Reprogram pg #2 by calling functions:
 *
 * After checking input integrity & building Grade array
 *  - Print the 3 arrays (function)
 * Sort arrays in ascending order by student id
 *  - Print 3 arrays (function)
 * compute average; return value to main
 *  - print from main
 * find student id with higest score; return index to main
 *  - print from main: name, score, letter grade
 * Using switch/case statements;
 *  - print # of A's, B's, C's, D's, F's
 *  - print number of grades above average
 * Sort arrays in descending order by test score
 *  - Print 3 arrays (function)
*----------------------------------*/

#include <stdio.h>
#include <stdbool.h>
#define MAXIMUMSTUDENTS 50

int fill_arrays          (int studentID[], int studentScore[]);
void setStudentGrades    (int studentScore[], char studentGrade[], int studentCount);
void resetStudentGrades  (int studentScore[], char studentGrade[], int studentCount);
void displayArrays       (int studentID[], int studentScore[], char studentGrade[], int studentCount);
float averageGrade       (int scores[], int classSize);
int bestStudent          (int studentScore[], int studentCount);
int getAboveAverage      (int studentScore[], int studentCount, int average);
void sortASCENDING       (int array1[], int array2[], int n);
void sortDESCENDING      (int array1[], int array2[], int n);

int a = 0, b = 0, c = 0, d = 0, f = 0; //  Shouldn't be global..

int main(void)
{
    int studentID[MAXIMUMSTUDENTS], studentScore[MAXIMUMSTUDENTS];
    int tempA[MAXIMUMSTUDENTS], tempI[MAXIMUMSTUDENTS];
    char studentGrade[MAXIMUMSTUDENTS];
    int studentCount, classAverage, classSum, overAverage, index = 0;
    float numericalAverage = 0;
    //  Welcome statements
    printf ("Welcome, Please enter upto %i pairs of Student ID's & scores.\n", MAXIMUMSTUDENTS);
    printf ("To halt the data entry process, enter 0 for the Student ID.\n\n");

    //  Gather Input
    studentCount = fill_arrays(studentID, studentScore);

    //  Disregard computation & printing when there is an immediate exit
    if ( studentCount != 0 ) {

    //  Build letter grades from numerical grades
        setStudentGrades(studentScore, studentGrade, studentCount);

    //  Print ID's, Numerical & Alphabetical grades
        printf ("Report - Original data:\n");
        displayArrays(studentID, studentScore, studentGrade, studentCount);

    //  Sort the arrays thru ascending order of StudentID[]
        // sortAsc(studentID, studentScore, studentGrade, studentCount);
        printf ("Report - Student ID Ascending:\n");
        sortASCENDING(studentID, studentScore, studentCount);
        resetStudentGrades(studentScore, studentGrade, studentCount);
        displayArrays(studentID, studentScore, studentGrade, studentCount);

    //  Class average, # of students above class average
        numericalAverage = averageGrade(studentScore, studentCount);
        printf ("The average test score was: %3.2f, ", numericalAverage);
        overAverage = getAboveAverage(studentScore, studentCount, numericalAverage);
        printf ("of which %d students scored over the average.\n", overAverage);

    //  Find the classes' best student
        index = bestStudent(studentScore, studentCount);
        printf ("The Student ID # %i received the highest score of: %i, for a grade of: %c\n", studentID[index], studentScore[index], studentGrade[index]);

    //  Alphabetical Grade Bins
        printf ("The grade distribution is:\n");
        printf ("\tA: %i\n\tB: %i\n\tC: %i\n\tD: %i\n\tF: %i\n\n", a, b, c, d, f);

    //  Sort the arrays thru descending order of StudentScore[]
        // sortDSC(studentID, studentScore, studentGrade, studentCount);
        printf ("Report - Student Score Descending:\n");
        sortDESCENDING(studentScore, studentID, studentCount);
        resetStudentGrades(studentScore, studentGrade, studentCount);
        displayArrays(studentID, studentScore, studentGrade, studentCount);
    }
}
void sortDESCENDING(int array1[ ], int array2[ ], int n)
{
   /* Function to sort a passed array in descending order */
    int i, j, temp, temp2;

    for( i=0; i < (n - 1); ++i )

      for( j = i + 1; j < n; ++j )

         if ( array1[i] < array1[j] ) {
          /* swap array1 id elements */
          temp = array1[i];
          array1[i] = array1[j];
          array1[j] = temp;

          /* swap the array2 elements */
          temp2 = array2[i];
          array2[i] = array2[j];
          array2[j] = temp2;
        }

    return;
}

void sortASCENDING(int array1[ ], int array2[ ], int n)
{
   /* Function to sort a passed array in ascending order */
    int i, j, temp, temp2;

    for( i=0; i < (n - 1); ++i )

      for( j = i + 1; j < n; ++j )

         if ( array1[i] > array1[j] ) {
          /* swap array1 id elements */
          temp = array1[i];
          array1[i] = array1[j];
          array1[j] = temp;

          /* swap the array2 elements */
          temp2 = array2[i];
          array2[i] = array2[j];
          array2[j] = temp2;
        }

    return;
}

int getAboveAverage(int studentScore[], int studentCount, int average)
{
    int i, aboveAverage = 0;

    for (i = 0; i < studentCount; ++i)
        if (studentScore[i] > average) {
            aboveAverage += 1;
        }

    return aboveAverage;
}

int bestStudent(int studentScore[], int studentCount)
{
    int i, max, maxIndex = 0;

    for (i = 0; i < studentCount; ++i)
            if (studentScore[i] > max) {
                max = studentScore[i];
                maxIndex = i;
            }
    return maxIndex;
}

float averageGrade(int scores[], int classSize)
{
    int i, sum = 0;

    for ( i = 0; i < classSize; ++i ) {
        sum += scores[i];
    }

    return (float)sum / classSize;
}

void displayArrays(int studentID[], int studentScore[], char studentGrade[], int studentCount)
{
    int i;


    printf ("\t--------------------\n");
    printf ("\t ID : Score : Grade\n");
    printf ("\t--------------------\n");
    for (i = 0; i < studentCount; ++i){
        printf ("\t%4i   %3i      %1c \n", studentID[i], studentScore[i], studentGrade[i]);
    }
    printf ("\t--------------------\n\n");
}
void resetStudentGrades(int studentScore[], char studentGrade[], int studentCount)
{
    int i;

    for ( i = 0; i < studentCount; ++i ) {

        switch(studentScore[i]) {
        case 90 ... 100:
            studentGrade[i] = 'A';
            break;

        case 80 ... 89:
            studentGrade[i] = 'B';
            break;

        case 70 ... 79:
            studentGrade[i] = 'C';
            break;

        case 60 ... 69:
            studentGrade[i] = 'D';
            break;

        case 0 ... 59:
            studentGrade[i] = 'F';
            break;
        }
    }
}

void setStudentGrades(int studentScore[], char studentGrade[], int studentCount)
{

    int i;

    for ( i = 0; i < studentCount; ++i ) {

        switch(studentScore[i]) {
        case 90 ... 100:
            studentGrade[i] = 'A';
            a += 1;
            break;

        case 80 ... 89:
            studentGrade[i] = 'B';
            b += 1;
            break;

        case 70 ... 79:
            studentGrade[i] = 'C';
            c += 1;
            break;

        case 60 ... 69:
            studentGrade[i] = 'D';
            d += 1;
            break;

        case 0 ... 59:
            studentGrade[i] = 'F';
            f += 1;
            break;
        }
    }
}

int fill_arrays(int studentID[], int studentScore[])
{
    int i;

    for (i = 0; i < MAXIMUMSTUDENTS; ++i) {
        printf ( "\tStudent's ID: " );
        scanf  ( "%i", &studentID[i] );

        //  Exit loop when student ID equals 0
        if ( studentID[i] == 0 ) {
            printf("End of data collection.\n\n");
            break;
        }
        do {
          printf ( "\tEnter Grade: " );
          scanf  ( "%i", &studentScore[i] );

          if ( studentScore[i] >= 0 && studentScore[i] <= 100 )
            break;
          else
            printf ("\t*Error: Input %d, is out of range.*\n\tPlease use an integer from 1 to 100.\n", studentScore[i]);
        }
        while (1);


    }

    return i;
}
