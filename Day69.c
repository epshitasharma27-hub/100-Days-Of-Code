/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Frequency array (assuming values are within 0 to n-1)
    int visited[n];
    for (int i = 0; i < n; i++)
        visited[i] = 0;

    // Single iteration through the array
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]] == 1) {
            printf("Repeated element = %d\n", arr[i]);
            return 0;   // stop as soon as we find the duplicate
        }
        visited[arr[i]] = 1;
    }

    printf("No repeated element found\n");
    return 0;
}
