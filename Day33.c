#include <stdio.h>
//Search in a sorted array using binary search.

int main() {
    int n, key;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found)
        printf("Element %d found at index %d\n", key, mid);
    else
        printf("Element %d not found.\n", key);

        //Insert an element in a sorted array at the appropriate position.

    int size, value;

    printf("Enter number of elements: ");
    scanf("%d", &size);

    int data[100];   // new name instead of arr

    printf("Enter %d sorted values:\n", size);
    for (int p = 0; p < size; p++) {
        scanf("%d", &data[p]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &value);

    int k = size - 1;   // new variable instead of i

    // shifting elements
    while (k >= 0 && data[k] > value) {
        data[k + 1] = data[k];
        k--;
    }

    // place the new value
    data[k + 1] = value;
    size++;

    printf("Updated array:\n");
    for (int q = 0; q < size; q++) {
        printf("%d ", data[q]);
    }

    

    return 0;
}
