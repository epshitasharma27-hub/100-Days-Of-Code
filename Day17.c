#include <stdio.h>

//Write a program to check if a number is an Armstrong number.
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate sum of nth power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check Armstrong condition
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);



        //Write a program to check if a number is prime. 

    
    int value, flag = 0, j;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &value);

    if (value <= 1) {
        printf("%d is not a prime number.\n", value);
        return 0;
    }

    // Check divisibility
    for (j = 2; j <= value / 2; j++) {
        if (value % j == 0) {
            flag = 1;
            break;
        }
    }

    // Print result
    if (flag == 0)
        printf("%d is a prime number.\n", value);
    else
        printf("%d is not a prime number.\n", value);

    

    return 0;
}
