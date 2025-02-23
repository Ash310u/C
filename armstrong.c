#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while(temp > 0) {
        i = temp % 10;
        sum += i * i * i;
        temp /= 10;
    }
    if(sum == n) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }
    return 0;
}