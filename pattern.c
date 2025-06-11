// #include <stdio.h>

// int main() {
//     int i, j;
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);
//     for(i = 1; i <= n; i++) {
//         for(j = 1; j <= i; j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int i, j;
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++) {
        for(j = 0; j <= n; j++) {
            if(n-i <= j && j >= n-i-2) {
                printf("* ");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
