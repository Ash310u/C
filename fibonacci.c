#include <stdio.h>

int main() {
    int n, i;
    int f1 = 1, f2 = 1, f3;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d %d ", f1, f2);
    for(int i = 3; i <= n; i++) {
        f3 = f1 + f2;
        printf("%d ", f3);
        f1 = f2;
        f2 = f3;
    }
    printf("\n");
    return 0;
}