#include <stdio.h>

/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/

int main() {
    int totalRows = 5;       // total number of rows
    int rowIndex;            // for controlling rows
    int spaceIndex;          // for spaces before numbers
    int numberIndex;         // for printing numbers
    int startNum;            // starting number in each row

    for (rowIndex = 1; rowIndex <= totalRows; rowIndex++) {
        // print spaces
        for (spaceIndex = 1; spaceIndex <= totalRows - rowIndex; spaceIndex++) {
            printf(" ");
        }

        // find starting number of this row
        startNum = totalRows - rowIndex + 1;

        // print numbers from startNum to 5
        for (numberIndex = startNum; numberIndex <= totalRows; numberIndex++) {
            printf("%d", numberIndex);
        }

        printf("\n");
    }

    /*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

    
    int blockOne = 1;   // stars in first block
    int blockTwo = 2;   // stars in second block
    int blockThree = 5; // stars in third block
    int blockFour = 3;  // stars in fourth block
    int blockFive = 1;  // stars in fifth block

    int starCounter;    // loop counter

    // Block 1
    for (starCounter = 1; starCounter <= blockOne; starCounter++) {
        printf("*\n");
    }
    printf("\n"); // blank line

    // Block 2
    for (starCounter = 1; starCounter <= blockTwo; starCounter++) {
        printf("*\n");
    }
    printf("\n"); // blank line

    // Block 3
    for (starCounter = 1; starCounter <= blockThree; starCounter++) {
        printf("*\n");
    }
    printf("\n"); // blank line

    // Block 4
    for (starCounter = 1; starCounter <= blockFour; starCounter++) {
        printf("*\n");
    }
    printf("\n"); // blank line

    // Block 5
    for (starCounter = 1; starCounter <= blockFive; starCounter++) {
        printf("*\n");
    }


    return 0;
}
