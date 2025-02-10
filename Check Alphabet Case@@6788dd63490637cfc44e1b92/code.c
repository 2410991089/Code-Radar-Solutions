#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if (ch>='a' && ch<='z') {
        printf("Lowercase\n");
         } else {
        printf("Uppercase\n");
         }
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}