#include <stdio.h>
//Write a program to print the product of even numbers from 1 to n.


int main() {
    int n, i;
    long long product = 1;  // Use long long to handle large results
    int hasEven = 0;        // Flag to check if there are even numbers

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;  // At least one even number is multiplied
    }

    if (hasEven)
        printf("Product of even numbers from 1 to %d = %d\n", n, product);
    else
        printf("No even numbers in the range 1 to %d.\n", n);

    return 0;
}
