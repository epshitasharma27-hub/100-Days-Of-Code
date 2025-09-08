#include <stdio.h>

// Write a program to input a year and check whether it is a leap year or not using conditional statements.


int main() {
    int year;
    
    // Input year
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check leap year conditions
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }


    //Write a program to input a character and check whether it is a vowel or consonant using if–else.

    
    char ch;

    // Input character
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if it's a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    }
    else {
        printf("%c is a consonant.\n", ch);
    }

    


    return 0;
}

