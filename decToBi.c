#include <stdio.h>

int main() {
    // This program converts decimal numbers to binary
    int decimal, binary = 0, base = 1;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    // The conversion process:
    // 1. Get remainder when divided by 2 (this gives 0 or 1)
    // 2. Multiply by increasing powers of 10 to build the binary number
    // 3. Divide decimal by 2 and repeat until decimal becomes 0
    while (decimal > 0) {
        // decimal % 2 gives the binary digit (0 or 1)
        // multiply by base (power of 10) to put digit in correct position
        binary = binary + (decimal % 2) * base;
        decimal = decimal / 2;     // Remove rightmost bit of decimal
        base = base * 10;          // Increase position value by 10
    }
    
    printf("Binary number: %d\n", binary);
    
    return 0;
}
