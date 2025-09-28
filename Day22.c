#include <stdio.h>

//Write a program to check if a number is a strong number.


int main() {
    int numberInput;       // input number from user
    int digitExtracted;    // to store each digit
    int sumFactorials = 0; // sum of factorials of digits
    int tempNumber;        // copy of the number for processing
    int factorial;         // factorial of a digit
    int counter;           // loop counter for factorial

    printf("Enter a number: ");
    scanf("%d", &numberInput);

    tempNumber = numberInput;  // keep original number for calculation

    while (tempNumber > 0) {
        digitExtracted = tempNumber % 10;

        // calculate factorial of the digit
        factorial = 1;
        for (counter = 1; counter <= digitExtracted; counter++) {
            factorial *= counter;
        }

        sumFactorials += factorial;
        tempNumber /= 10;  // remove last digit
    }

    // check if number is strong
    if (sumFactorials == numberInput) {
        printf("%d is a Strong Number.\n", numberInput);
    } else {
        printf("%d is NOT a Strong Number.\n", numberInput);
    }

    //Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

    
    int terms;              // number of terms in series
    int numerator = 1;      // numerator starts with 1
    int denominator = 1;    // denominator starts with 1
    int termCounter;        // loop counter for terms
    double seriesSum = 0.0; // sum of series
    double currentTerm;     // value of current term

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (termCounter = 1; termCounter <= terms; termCounter++) {
        if (termCounter == 1) {
            currentTerm = 1.0; // first term is 1
        } else {
            numerator += 2;     // numerator increases by 2 each time
            denominator += 2;   // denominator increases by 2 each time
            currentTerm = (double)numerator / denominator;
        }

        seriesSum += currentTerm;
    }

    printf("Sum of the series up to %d terms: %.3lf\n", terms, seriesSum);


    return 0;
}


