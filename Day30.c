//Count even and odd numbers in an array.
//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    int posCount = 0, negCount = 0, zeroCount = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            posCount++;
        } else if(arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }
    return 0;
}