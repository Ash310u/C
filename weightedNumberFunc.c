#include <stdio.h>
#include <stdlib.h>

int* createArr(int n);

int main() {
    int n;
    printf("Enter the Numbers of elements you want to put: ");
    scanf("%d", &n);
    if(n < 1) {
        printf("Invalid Input.\n");
        return 1;
    }

    int* x = createArr(n);
    printf("\n");
    int* y = createArr(n);
    printf("\n");
    
    int sum_xy = 0;
    int sum_y = 0;
    for(int i = 0; i < n; i++) {
        sum_xy += (x[i] * y[i]);
        sum_y += y[i];
    }
    printf("%f\n", (float)sum_xy/sum_y);

    free(x);
    free(y);
}

int* createArr(int n) {
    // Allocate memory for the array dynamically
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}