#include <stdio.h>

//Write a program to print the sum of the first n odd numbers.


int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to calculate sum of first n odd numbers
    for (i = 1; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);


    return 0;
}
