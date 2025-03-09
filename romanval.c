#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n <= 1000) {
        const char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        for(int i = 0; i < 13; i++) {
            while(n >= values[i]) {
                printf("%s", symbols[i]);
                n -= values[i];
            }
        }
        printf("\n");
        return 0;
    }
    printf("Invalid Input\n");
    return 1;
}