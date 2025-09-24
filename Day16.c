#include <stdio.h>

//Write a program to take a number as input and print its equivalent binary representation.


int main() {
    int num, bin[32], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Convert decimal to binary
    while (num > 0) {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Print binary in reverse order
    printf("Binary: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
    printf("\n");


    

    //Write a program to check if a number is a palindrome.

    

    int n, original, remainder, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;  // keep copy of input number

    while (n > 0) {
        remainder = n % 10;              // get last digit
        reversed = reversed * 10 + remainder;  
        n = n / 10;                      // remove last digit
    }

    if (original == reversed) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is NOT a Palindrome number.\n", original);
    }  

    return 0;
}
