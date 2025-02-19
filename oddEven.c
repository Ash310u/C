#include <stdio.h>

int main () {
    int n;
    printf("Give a number: ");
    scanf("%d", &n);
    n % 2 == 0 ? printf("It's an EVEN Number.\n") : printf("It's an ODD Number.\n");
    return 0;
}