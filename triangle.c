#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b) {
        printf("Triangle is possible with sides %d, %d and %d\n", a, b, c);
    } else {
        printf("Triangle is not possible with sides %d, %d and %d\n", a, b, c);
    }

    return 0;
}