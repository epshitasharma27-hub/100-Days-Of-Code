#include <stdio.h>

//Write a program to calculate the factorial of a number.


int main() {
    int n, i;
    long long fact = 1;  // factorial grows very fast, so use long long

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }


    //Write a program to reverse a given number.

    
    int num, rev = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // Store original number for reference

    while (num > 0) {
        digit = num % 10;        // Get last digit
        rev = rev * 10 + digit;  // Build reverse
        num = num / 10;          // Remove last digit
    }

    printf("Reverse of %d = %d\n", temp, rev);

    

    return 0;
}
