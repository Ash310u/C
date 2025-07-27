#include <stdio.h>

void inputArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void addArrays(int arr1[], int arr2[], int result[], int n) {
    for(int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], result[n];

    printf("Enter %d elements of the first array:\n", n);
    inputArray(arr1, n);

    printf("Enter %d elements of the second array:\n", n);
    inputArray(arr2, n);

    addArrays(arr1, arr2, result, n);

    printf("Resultant array after addition:\n");
    printArray(result, n);

    return 0;
}
