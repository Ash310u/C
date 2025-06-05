#include <stdio.h>

int ackerman(int m,int n);
int main() {
    int m,n;
    printf("Num1:");
    scanf("%d", &m);
    printf("Num2:");
    scanf("%d", &n);
    int r = ackerman(m,n);
    printf("%d",r);
    printf("\n");
    return 0;
}
int ackerman(int m,int n) {
    if(m == 0) {
        return n+1;
    } else if (m > 0 && n ==0) {
        return ackerman(m-1, 1);
    } else {
        return ackerman(m-1,ackerman(m,n-1));
    }
}