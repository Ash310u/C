#include <stdio.h>

void selectionSort(int arr[], int n) {
    int min_idx;
    for(int i=0; i<n; i++) {
        min_idx = i;
        for(int j=i; j<n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    int arr[] = {3,2,1,4};
    int n = 4;
    
    selectionSort(arr, n);
    
    for(int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}