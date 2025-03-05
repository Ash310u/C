#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    while (decimal > 0) {
        binary = binary + (decimal % 2) * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    
    printf("Binary number: %d\n", binary);
    
    return 0;
}
