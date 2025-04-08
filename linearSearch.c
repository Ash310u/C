#include <stdio.h>

int main() {
    int n, s;
    printf("Enter the Numbers of elements you want to put: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid Input");
        return 1;
    }
    int arr[n];
    printf("\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the Number you want to find: ");
    scanf("%d", &s);

    for(int i = 0; i < n; i++) {
        if(arr[i] == s) {
            printf("It is there\n");
            printf("Found a position: %d", i+1);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}