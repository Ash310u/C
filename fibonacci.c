#include <stdio.h>

// int main() {
//     int n, i;
//     int f1 = 1, f2 = 1, f3;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("%d %d ", f1, f2);
//     for(int i = 3; i <= n; i++) {
//         f3 = f1 + f2;
//         printf("%d ", f3);
//         f1 = f2;
//         f2 = f3;
//     }
//     printf("\n");
//     return 0;
// }

int fibonacci(int n);
int main() {
    int n, i;
    printf("Enter the Numbers of elements you want to put: ");
    scanf("%d", &n);
    if(n < 1) {
        printf("Invalid Input.\n");
        return 1;
    }
    
    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        int result = fibonacci(i);
        printf("%d", result);
        if(i < n-1) printf(", ");
    }
    printf("\n");
    return 0;
}

int fibonacci(int n) {
    if(n <= 0) {
        return 0;
    } else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}