#include <stdio.h>

int main() {
    int n = 3;
    int count = 0;

    // This loop iterates through all possible combinations of 5 variables (f,i,j,k,l)
    // where each variable can take values from 0 to n-1 (in this case 0 to 2)
    // Total combinations = n^5 = 3^5 = 243 combinations
    
    for (int t = 0; t < n * n * n * n * n; t++) {
        // Extract each variable using integer division and modulo operations:
        // f = (t / n^4) % n     - cycles every n^4 iterations
        // i = (t / n^3) % n     - cycles every n^3 iterations
        // j = (t / n^2) % n     - cycles every n^2 iterations
        // k = (t / n) % n       - cycles every n iterations
        // l = t % n             - cycles every iteration
        
        int f = (t / (n * n * n * n)) % n;  // Most significant digit
        int i = (t / (n * n * n)) % n;      // Second most significant digit
        int j = (t / (n * n)) % n;          // Middle digit
        int k = (t / n) % n;                // Second least significant digit
        int l = t % n;                      // Least significant digit

        // Print the current combination
        printf("f: %d ", f);
        printf("i: %d ", i);
        printf("j: %d ", j);
        printf("k: %d ", k);
        printf("l: %d ", l);
    }
}