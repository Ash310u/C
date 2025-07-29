#include <stdio.h>

#define N 3

void inputMatrix(int mat[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int mat[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void insertElement(int mat[N][N], int insert, int pos) {
    int count = 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(count == pos) {
                int total = N*N;
                int flat[N*N];
                int idx = 0;
                for(int x = 0; x < N; x++) {
                    for(int y = 0; y < N; y++) {
                        flat[idx++] = mat[x][y];
                    }
                }
                for(int k = total-1; k > pos-1; k--) {
                    flat[k] = flat[k-1];
                }
                flat[pos-1] = insert;
                idx = 0;
                for(int x = 0; x < N; x++) {
                    for(int y = 0; y < N; y++) {
                        mat[x][y] = flat[idx++];
                    }
                }
                i = N;
                break;
            }
            count++;
        }
    }
}

int main() {
    int mat[N][N];
    int insert;
    int pos;

    printf("Enter elements of %dx%d matrix:\n", N, N);
    inputMatrix(mat);

    printf("Enter the element to insert: ");
    scanf("%d", &insert);

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    insertElement(mat, insert, pos);

    printf("Matrix after insertion:\n");
    printMatrix(mat);

    return 0;
}

