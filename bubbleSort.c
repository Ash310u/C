#include <stdio.h>

int main() {
    int arr[] = {12, 976, 122, 1};
    int n = 4;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int j=0;j< n;j++){
        printf("%d,", arr[j]);
    }
    return 0;
}
