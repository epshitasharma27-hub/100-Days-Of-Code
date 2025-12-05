/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    int a[m];
    printf("Enter %d sorted elements:\n", m);
    for(int i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    int b[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < m && j < n) {
        if (a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    // Copy remaining elements of a[]
    while (i < m)
        merged[k++] = a[i++];

    // Copy remaining elements of b[]
    while (j < n)
        merged[k++] = b[j++];

    // Print result
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    printf("\n");
    return 0;
}
