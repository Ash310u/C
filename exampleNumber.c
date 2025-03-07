#include <stdio.h>

int main() {
    int i, n;
    double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        float fac = 1.0;
        for(int j = 1; j <= i; j++) {
            fac = fac * j;
        }
        sum = sum + (i/fac);
    }
    printf("Sum: %0.2f\n", sum);
    return 0;
}