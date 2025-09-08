#include <stdio.h>

//Write a program to input an integer and check whether it is even or odd using if–else.



int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is Even.\n", num);
    } else {
        printf("%d is Odd.\n", num);
    }
    

    // Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

    #include <stdio.h>


    //int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Nested if–else
    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } 
    else 
    {
        printf("The number is Negative.\n");
    }    
    return 0; 
}
