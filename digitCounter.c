#include <stdio.h>

int main() {
    int n;
    if(!scanf("%d", &n)) {
        printf("Invalid Input\n");
        return 1;
    }
    int count = 0;
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }
    printf("%d\n", count);
}