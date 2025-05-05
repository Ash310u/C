#include <stdio.h>
#include <math.h>

int smallest_num(int arr[], int n);
int main() {
    int n;
    printf("Enter the Numbers of elements you want to put: ");
    scanf("%d", &n);
    if(n < 1) {
        printf("Invalid Input.\n");
        return 1;
    }
    int arr[n];
    printf("\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallestInt = smallest_num(arr, n);
    printf("%d\n", smallestInt);
}

int smallest_num(int arr[], int n) {
    if (n <= 1) {
        return 0;
    }
    
    int smallest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}