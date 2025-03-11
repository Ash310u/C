#include <stdio.h>

int main() {
    float num1, num2;
    int n;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Enter 1 for +\n");
    printf("Enter 2 for -\n");
    printf("Enter 3 for *\n");
    printf("Enter 4 for /\n");
    scanf(" %d", &n);

    switch(n) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if(num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero!\n");
            break;
        default:
            printf("Error! Invalid operator!\n");
    }
    return 0;

}