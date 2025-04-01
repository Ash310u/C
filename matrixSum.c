#include <stdio.h>

int matrixInput(int m[][3]);
int sum(int m1[][3], int m2[][3], int sum[][3]);

int main() {
    int m1[3][3];
    int m2[3][3];
    int m3[3][3];

    printf("Enter elements for the matrix 1:");
    matrixInput(m1);
    printf("\n");
    
    printf("Enter elements for the matrix 2:");
    matrixInput(m2);
    printf("\n");

    sum(m1, m2, m3);
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", m3[i][j]);
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

int sum(int m1[][3], int m2[][3], int sum[][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return 0;
}