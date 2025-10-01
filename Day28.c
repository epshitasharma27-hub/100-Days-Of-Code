#include <stdio.h>

// Write a program to print all the prime numbers from 1 to n.


int main() {
    int n, num, i, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for(num = 2; num <= n; num++) {
        isPrime = 1; // assume num is prime
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d ", num);
        }
    }
  
    //Read and print elements of a one-dimensional array.

   
    int length, index;
    int numbers[100];  // array to store elements

    printf("Enter the number of elements: ");
    scanf("%d", &length);

    // Input elements
    printf("Enter %d elements:\n", length);
    for(index = 0; index < length; index++) {
        scanf("%d", &numbers[index]);
    }

    // Print elements
    printf("The elements in the array are:\n");
    for(index = 0; index < length; index++) {
        printf("%d ", numbers[index]);
    }

    
    return 0;
}
