#include <stdio.h>

int matrixInput(int m[][3]);
int multiplication(int m1[][3], int m2[][3], int multi[][3]);

int main() {
    int m1[3][3];
    int m2[3][3];
    int multi[3][3];

    printf("Enter elements for the matrix 1:");
    matrixInput(m1);
    printf("\n");
    
    printf("Enter elements for the matrix 2:");
    matrixInput(m2);
    printf("\n");

    multiplication(m1, m2, multi);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", multi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

int matrixInput(int m[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    return 0;
}

int multiplication(int m1[][3], int m2[][3], int multi[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            multi[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                multi[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    return 0;
}