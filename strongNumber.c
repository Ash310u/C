#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        int fac = 1;
        for(i = 1; i <= digit; i++) {
            fac = fac * i;
        }
        sum = sum + fac;
        temp /= 10;
    }
    if(sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not a Strong number\n");
    }
    return 0;
}