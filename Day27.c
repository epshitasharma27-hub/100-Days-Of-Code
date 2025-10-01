/*Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */

#include <stdio.h>

int main() {
    int n = 5;  // height of the pyramid (number of rows in the top half)
    int i, j, k;

    // Upper half (including middle row)
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n - 1; i >= 1; i--) {
        // Print spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    /*Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */

   
   
    int rows = 4;  // number of rows for the upper half
    int line, space, star;

    // Upper half including middle
    for(line = 1; line <= rows; line++) {
        // Print spaces
        for(space = line; space < rows; space++) {
            printf(" ");
        }
        // Print stars
        for(star = 1; star <= (2 * line - 1); star++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(line = rows - 1; line >= 1; line--) {
        // Print spaces
        for(space = line; space < rows; space++) {
            printf(" ");
        }
        // Print stars
        for(star = 1; star <= (2 * line - 1); star++) {
            printf("*");
        }
        printf("\n");
    }



    
    return 0;
}
