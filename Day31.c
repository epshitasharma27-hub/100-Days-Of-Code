//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d.\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", key);
    }

    //Reverse an array without taking extra space.
    int size, left, right, temp;
    int data[100];

    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(left = 0; left < size; left++) {
        scanf("%d", &data[left]);
    }

    // Reversing the array in-place
    left = 0;
    right = size - 1;

    while(left < right) {
        temp = data[left];
        data[left] = data[right];
        data[right] = temp;

        left++;
        right--;
    }

    printf("Reversed array:\n");
    for(left = 0; left < size; left++) {
        printf("%d ", data[left]);
    }

    


    return 0;
}
