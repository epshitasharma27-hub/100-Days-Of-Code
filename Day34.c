#include <stdio.h>

//Insert an element in an array at a given position.


int main() {
    int n, pos, val;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1-based index): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Shift elements to right
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[pos - 1] = val;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //Delete an element from an array.
    
    int total, location;

    printf("Enter number of elements: ");
    scanf("%d", &total);

    int nums[100];   // different array name

    printf("Enter %d elements:\n", total);
    for (int a = 0; a < total; a++) {
        scanf("%d", &nums[a]);
    }

    printf("Enter position to delete (1-based index): ");
    scanf("%d", &location);

    // Shift elements to left
    for (int b = location - 1; b < total - 1; b++) {
        nums[b] = nums[b + 1];
    }

    total--;  // one element removed

    printf("Array after deletion:\n");
    for (int c = 0; c < total; c++) {
        printf("%d ", nums[c]);
    }


    return 0;
}
