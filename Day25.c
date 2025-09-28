#include <stdio.h>

/*Write a program to print the following pattern:
5
45
345
2345
12345
*/

int main() {
    int totalRows = 5;      // fixed number of rows
    int rowIndex;           // loop for rows
    int numberIndex;        // loop for numbers in each row
    int startNumber;        // first number of each row

    for (rowIndex = 1; rowIndex <= totalRows; rowIndex++) {
        startNumber = totalRows - rowIndex + 1;  // find starting number
        for (numberIndex = startNumber; numberIndex <= totalRows; numberIndex++) {
            printf("%d", numberIndex);
        }
        printf("\n");
    }

    /*Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */



    int height = 5;          // number of rows
    int rowPointer;          // controls rows
    int spaceCounter;        // prints spaces
    int starPrinter;         // prints stars

    for (rowPointer = 1; rowPointer <= height; rowPointer++) {
        // print spaces
        for (spaceCounter = 1; spaceCounter < rowPointer; spaceCounter++) {
            printf(" ");
        }
        // print stars
        for (starPrinter = height; starPrinter >= rowPointer; starPrinter--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
