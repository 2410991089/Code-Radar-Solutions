#include <stdio.h>

int main() {
    int num1 ,num2;
    scanf("%d %d" ,num1 ,num2);
    int num3 = (num1>>num2) & 1;
    printf("%d\n" ,num3);
    return 0;
}