#include <stdio.h>

//Write a program to swap the first and last digit of a number.


int main() {
    int num, original, firstDigit, lastDigit;
    int middlePart = 0, place = 1, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;         // Keep copy of original number
    lastDigit = num % 10;   // Extract last digit

    // Find first digit and place value
    while (num >= 10) {
        middlePart = middlePart * 10 + (num % 10);  // Collect digits except last
        num /= 10;
        place *= 10;
    }
    firstDigit = num;       // Remaining is first digit

    // Remove last digit from middlePart
    middlePart /= 10;

    // Form new swapped number
    swappedNum = lastDigit * place + middlePart * 10 + firstDigit;

    printf("Original Number: %d\n", original);
    printf("After Swapping : %d\n", swappedNum);

    //Write a program to check if a number is a perfect number.

    int inputNumber;          // input from user
    int checkFactor;          // to test divisors
    int totalSum = 0;         // to store sum of divisors
    int givenNumber;          // keep a copy of the number

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    givenNumber = inputNumber;  // copy input

    // Find divisors and their sum
    for (checkFactor = 1; checkFactor <= inputNumber / 2; checkFactor++) {
        if (inputNumber % checkFactor == 0) {
            totalSum = totalSum + checkFactor;
        }
    }

    // Check for perfect number
    if (totalSum == givenNumber) {
        printf("%d is a Perfect Number.\n", givenNumber);
    } else {
        printf("%d is NOT a Perfect Number.\n", givenNumber);
    }

    

    return 0;
}
