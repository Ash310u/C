// #include <stdio.h>

// int main() {
//     int n, i , fac = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++) {
//         fac =  fac * i;
//     }
//     printf("Factorial: %d\n", fac);
//     return 0;
// }

#include <stdio.h>

long fac(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial: %d\n", fac(n));
    return 0;
}

long fac(int n) {
        if(n <= 0) {
            return 1;
        } else {
            return n * fac(n-1);
        }
    }