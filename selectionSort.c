#include <stdio.h>

int main() {
    int arr[]={12,976,122,1,3432,4,542,6,47,85,92};
    for(int i=0;i< sizeof(arr)/sizeof(arr[0]);i++){
        int min= arr[i];
        for(int j=i;j< sizeof(arr)/sizeof(arr[0]);j++){
            if(arr[j]<min){
                min=arr[j];
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }
    for(int j=0;j< sizeof(arr)/sizeof(arr[0]);j++){
        printf("%d,", arr[j]);
    }
    return 0;
}