#include <stdio.h>

//Find the sum of each row of a matrix and store it in an array.

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], sum[r];

    for (int i = 0; i < r; i++) {
        sum[i] = 0;   // initialize
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];   // add directly
        }
    }

    for (int i = 0; i < r; i++)
        printf("%d ", sum[i]);

        //Find the transpose of a matrix.
        
    int x, y;
    scanf("%d %d", &x, &y);

    int mat[x][y], trans[y][x];

    // input
    for (int p = 0; p < x; p++)
        for (int q = 0; q < y; q++)
            scanf("%d", &mat[p][q]);

    // transpose
    for (int p = 0; p < x; p++)
        for (int q = 0; q < y; q++)
            trans[q][p] = mat[p][q];

    // output
    for (int q = 0; q < y; q++) {
        for (int p = 0; p < x; p++)
            printf("%d ", trans[q][p]);
        printf("\n");
    }


    return 0;
}

