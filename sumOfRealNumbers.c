#include<stdio.h>

int s(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of numbers from 1 to %d is %d\n", n, s(n));
    return 0;
}

int s(int n) {
    if(n >= 1) {
        return n + s(n-1);
    } else {
        return 0;
    }
}