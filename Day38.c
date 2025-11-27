#include <stdio.h>
// Add two matrices.


int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], s[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            scanf("%d", &b[i][j]);
            s[i][j] = a[i][j] + b[i][j];
        }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", s[i][j]);
        printf("\n");
    }

    //Check if a matrix is symmetric.

    
    
    int s;
    scanf("%d", &s);

    int mat[s][s];
    int flag = 1;

    for (int p = 0; p < s; p++)
        for (int q = 0; q < s; q++)
            scanf("%d", &mat[p][q]);

    for (int p = 0; p < s; p++)
        for (int q = 0; q < s; q++)
            if (mat[p][q] != mat[q][p])
                flag = 0;

    if (flag) printf("Symmetric");
    else      printf("Not Symmetric");



    


    return 0;
}
