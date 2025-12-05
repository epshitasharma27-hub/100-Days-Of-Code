/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int maxSum = 0, currSum = 0;

    // First window sum
    for (int i = 0; i < k; i++) {
        currSum += arr[i];
    }
    maxSum = currSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        currSum = currSum - arr[i - k] + arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
