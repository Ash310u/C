#include <stdio.h>

int main() {
    int n;
    float sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for(int x = 1; x <= n; x++) {
        float powValue = 1.0;
        for(int i = 1; i <= x; i++) {
            powValue *= ((float)x - 1)/(float)x;
        }
        if(1 > x) {
            sum += 0.5 * powValue;
        } else {
            sum += powValue;
        }
    }
    printf("Sum: %0.2f\n", sum);
    return 0;
}