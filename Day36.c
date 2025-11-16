#include <stdio.h>

//Read and print a matrix.

int main() {
    int rows, cols;

    // Taking order of matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];

    // Reading matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix
    printf("\nThe matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    //Find the sum of all elements in a matrix
    int r, c;

    // Taking matrix size
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int mat[100][100];

    // Reading matrix
    printf("\nEnter matrix elements:\n");
    for(int x = 0; x < r; x++) {
        for(int y = 0; y < c; y++) {
            scanf("%d", &mat[x][y]);
        }
    }

    // Finding sum
    int total = 0;
    for(int p = 0; p < r; p++) {
        for(int q = 0; q < c; q++) {
            total += mat[p][q];
        }
    }

    printf("\nSum of all elements = %d\n", total);




    return 0;
}
