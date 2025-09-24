#include <stdio.h>

//Write a program to find the LCM of two numbers.


int main() {
    int n1, n2, a, b, temp, hcf, lcm;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;

    // Euclidean algorithm for HCF
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Calculate LCM
    lcm = (n1 * n2) / hcf;

    printf("LCM of %d and %d is: %d\n", n1, n2, lcm);


    //Write a program to find the sum of digits of a number.

    #include <stdio.h>


    int num, digit, sum = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Extract digits and add
    while (num != 0) {
        digit = num % 10;   // get last digit
        sum += digit;       // add to sum
        num /= 10;          // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    

    return 0;
}
