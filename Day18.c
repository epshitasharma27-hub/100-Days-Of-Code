#include <stdio.h>

//Write a program to print all factors of a given number.

int main() {
    int number, k;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Factors of %d are: ", number);

    // Find factors
    for (k = 1; k <= number; k++) {
        if (number % k == 0) {
            printf("%d ", k);
        }
    }

    printf("\n");


//Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>


    int a, b, temp;

    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) is: %d\n", a);

    return 0;
}
