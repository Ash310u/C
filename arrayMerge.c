#include <stdio.h>

int main() {
    int arr1[5], arr2[10], arr3[15];;
    
    printf("Give Numebr for first array\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    
    printf("Give Numebr for second array\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("\n");
    
    for(int i = 0; i < 15; i++) {
        if(i < 5) {
            arr3[i] = arr1[i];
        }
        if(i >= 5) {
            arr3[i] = arr2[i - 5];
        }
    }
    printf("New array\n");
    for(int i = 0; i < 15; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}   