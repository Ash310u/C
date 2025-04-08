#include <stdio.h>
#include <math.h>

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
    
    float sum = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float _x = sum/n;
    printf("Mean: %0.4f\n", _x);

    float sum2 = 0;
    for(int i = 0; i < n; i++) {
        float top = (arr[i] - _x);
        sum2 += (top * top);
    }
    float var = sum2/n;
    float sd = sqrt(var);
    printf("Variance : %0.4f\n", var);
    printf("Standard daviation: %0.4f\n", sd);
    return 0;
}
