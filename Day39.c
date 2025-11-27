#include <stdio.h>

//Check if the elements on the diagonal of a matrix are distinct.

int main() {
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int distinct = 1;

    // input matrix
    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            scanf("%d", &arr[x][y]);

    // check diagonal distinctness
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i][i] == arr[j][j])
                distinct = 0;

    if (distinct) 
        printf("Distinct");
    else 
        printf("Not Distinct");


        //Find the sum of main diagonal elements for a square matrix.

        
    int k;
    scanf("%d", &k);

    int mx[k][k];
    int dsum = 0;

    for (int a1 = 0; a1 < k; a1++)
        for (int b1 = 0; b1 < k; b1++)
            scanf("%d", &mx[a1][b1]);

    for (int a1 = 0; a1 < k; a1++)
        dsum += mx[a1][a1];

    printf("%d", dsum);

    


    return 0;
}
