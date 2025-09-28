#include <stdio.h>

//Write a program to print the following pattern

int main() {
    int rows;          // number of rows entered by user
    int rowCounter;    // loop for rows
    int starCounter;   // loop for stars

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (rowCounter = 1; rowCounter <= rows; rowCounter++) {
        for (starCounter = 1; starCounter <= rowCounter; starCounter++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    //Write a program to print the following pattern:

    int lineCount = 5;     // total number of lines
    int outerIndex;        // controls rows
    int innerIndex;        // controls numbers inside a row

    for (outerIndex = 1; outerIndex <= lineCount; outerIndex++) {
        for (innerIndex = 1; innerIndex <= outerIndex; innerIndex++) {
            printf("%d", innerIndex);
        }
        printf("\n"); // move to next line
    }

    

    return 0;
}
