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
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(j = n; j >= 1; j--) {
            if(j <= i) {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
