#include <stdio.h>

//Write a program to find the product of odd digits of a number.


int main() {
    int num, digit, product = 1;
    int hasOdd = 0;  // To check if there is at least one odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Product of odd digits: 0\n");
        return 0;
    }

    while (num > 0) {
        digit = num % 10;     // extract last digit
        if (digit % 2 != 0) { // check if odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;            // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found, product = 0\n");


        //Write a program to find the 1’s complement of a binary number and print it.
        
        
    long long binary;             // input binary number
    long long original;           // to keep original value
    long long onesComplement = 0; // to store result
    long long placeValue = 1;     // keeps track of position (1, 10, 100...)
    int lastDigit;                // to store each extracted digit
    int newDigit;                 // to store complemented digit

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    original = binary;   // save original number

    while (binary > 0) {
        lastDigit = binary % 10;   // extract last digit

        if (lastDigit == 0)
            newDigit = 1;          // complement of 0 is 1
        else
            newDigit = 0;          // complement of 1 is 0

        onesComplement = onesComplement + (newDigit * placeValue);

        placeValue *= 10;  // move to next place
        binary /= 10;      // remove last digit
    }

    printf("Original Binary : %lld\n", original);
    printf("1's Complement  : %lld\n", onesComplement);





    return 0;
}
