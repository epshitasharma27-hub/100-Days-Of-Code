/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], ans[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        // check elements on the left side
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }

        ans[i] = prevGreater;
    }

    // print result
    for (int i = 0; i < n; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
