#include<stdio.h>

//Write a program to swap two numbers without using a third variable.



int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping without third variable (using arithmetic)
    a = a + b;  // sum stored in a
    b = a - b;  // new b = (a+b) - b = a
    a = a - b;  // new a = (a+b) - a = b

    printf("After swapping: a = %d, b = %d\n", a, b);



//Write a program to find and display the sum of the first n natural numbers.

    int n, i, sum = 0;

    // Input from user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum of first n natural numbers
    for(i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

   


    return 0;
}
