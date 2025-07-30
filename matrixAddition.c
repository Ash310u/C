#include <stdio.h>

void inputMatrix(int mat[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the matrices (n x n): ");
    scanf("%d", &n);
    int mat1[100][100], mat2[100][100], result[100][100];

    printf("Elements for the first %dx%d matrix:\n", n, n);
    inputMatrix(mat1, n);

    printf("Elements for the second %dx%d matrix:\n", n, n);
    inputMatrix(mat2, n);

    addMatrices(mat1, mat2, result, n);

    printf("Resultant matrix:\n");
    printMatrix(result, n);

    return 0;
}
