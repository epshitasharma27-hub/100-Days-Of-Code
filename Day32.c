//Merge two arrays.
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};

    int size1 = 3;
    int size2 = 3;

    int merged[size1 + size2];

    // Copy arr1
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Copy arr2
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Print merged array
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }

    //Find the digit that occurs the most times in an integer number.
    
    int num, original;
    int count[10] = {0};   // To store frequency of digits
    int rem;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;        // Store original number

    // Count digits
    while (num > 0) {
        rem = num % 10;     // Extract last digit
        count[rem]++;       // Increase count
        num = num / 10;     // Remove last digit
    }

    int maxDigit = 0;       // Digit with highest frequency
    int maxCount = count[0];

    // Find digit with highest frequency
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times (%d times).\n", maxDigit, maxCount);

    


    return 0;
}
