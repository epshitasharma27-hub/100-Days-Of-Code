#include <stdio.h>

// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check character type
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Alphabet.\n", ch);
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    } 
    else {
        printf("'%c' is a Special Character.\n", ch);
    }

    


    // Write a program to input three numbers and find the largest among them using if–else.

    #include <stdio.h>


    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check which is largest
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    }
    else {
        printf("%d is the largest number.\n", c);
    }
    return 0;
}
