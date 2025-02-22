#include <stdio.h>

int main() {
    int n, i , fac = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        fac =  fac * i;
    }
    printf("Factorial: %d\n", fac);
    return 0;
}