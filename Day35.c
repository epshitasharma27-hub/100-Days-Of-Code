#include <stdio.h>
//Find the second largest element in an array.

int main() {
    int a;

    printf("Enter size of array: ");
    scanf("%d", &a);

    int arr[100];

    printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = -99999;   // largest
    int max2 = -99999;   // second largest

    // Find largest and second largest
    for (int i = 0; i < a; i++) {
        if (arr[i] > max1) {
            max2 = max1;     // update second largest
            max1 = arr[i];   // update largest
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];   // update second largest
        }
    }

    printf("Second largest element = %d\n", max2);

    //Rotate an array to the right by k positions.

    
    int size, shift;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int x[size], y[size];

    printf("Enter elements:\n");
    for (int a = 0; a < size; a++) {
        scanf("%d", &x[a]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &shift);

    shift = shift % size;   // To avoid extra rotations

    for (int b = 0; b < size; b++) {
        y[(b + shift) % size] = x[b];
    }

    printf("Rotated array:\n");
    for (int c = 0; c < size; c++) {
        printf("%d ", y[c]);
    }






    return 0;
}
