#include <stdio.h>

int main () {
    int n;
    printf("Give a number: ");
    scanf("%d", &n);
    n & 1 == 1 ? printf("It's an ODD Number.\n") : printf("It's an EVEN Number.\n");
    return 0;
}