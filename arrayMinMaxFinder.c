#include <stdio.h>

int main() {
    int arr[5];
    
    printf("Enter Elements for array: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    
    int min = arr[0], max = 0;
    
    for(int i = 0; i < 5; i++) {
        if(arr[i] >= max) {
            max = arr[i];
        }
        if(arr[i] <= min ) {
            min = arr[i];
        } 
    }
    printf("\n");
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}   