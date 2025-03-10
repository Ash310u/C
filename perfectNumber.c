#include <stdio.h>

int main() {
    int i, n, isperfect = 1;
    scanf("%d", &n);

    for(i=1; i<=n/2; i++) {
        if(n%i == 0) {
            isperfect = 1;
        } else {
            isperfect = 0;
        }
    }
    if(isperfect) {
        printf("%d is a Perfect Number\n", n);
    } else {
        printf("%d is not a Perfect Number\n", n);
    }
    return 0;
}