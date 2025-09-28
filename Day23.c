#include <stdio.h>

//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms

int main() {
    int numberOfTerms;         // number of terms in the series
    int currentNumerator = 2;  // numerator starts at 2
    int currentDenominator = 3; // denominator starts at 3
    int termIndex;             // loop counter
    double sumSeries = 0.0;    // sum of series
    double termValue;           // value of current term

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    for (termIndex = 1; termIndex <= numberOfTerms; termIndex++) {
        termValue = (double)currentNumerator / currentDenominator;
        sumSeries += termValue;

        // update numerator and denominator for next term
        currentNumerator += 2;
        currentDenominator += 4;
    }

    printf("Sum of the series up to %d terms: %.3lf\n", numberOfTerms, sumSeries);

    //Write a program to print the following pattern


    int totalRows = 5;     // number of rows
    int totalCols = 5;     // number of columns
    int rowCounter;        // loop variable for rows
    int colCounter;        // loop variable for columns

    for (rowCounter = 1; rowCounter <= totalRows; rowCounter++) {
        for (colCounter = 1; colCounter <= totalCols; colCounter++) {
            printf("*");
        }
        printf("\n"); // move to next line after each row
    }

    
    return 0;
}
