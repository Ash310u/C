#include  <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    // Check if the number is a power of 2
    // Convert the double 'num' to an integer 'n'
    // This removes any decimal places by truncating
    // For example: 5.7 becomes 5, 3.2 becomes 3
    int n = (int)num;
    
    // First check if the number is a positive integer
    if (num != n || n <= 0) {
        printf("%.5f is not a power of 2\n", num);
    }
    // Use bitwise AND to check if n is a power of 2
    // A power of 2 in binary has only one 1 bit
    // n-1 will have all 1s after that bit
    // So n & (n-1) will be 0 only for powers of 2
    else if ((n & (n - 1)) == 0) {
        printf("%.5f is a power of 2\n", num);
    } else {
        printf("%.5f is not a power of 2\n", num);
    }
}

