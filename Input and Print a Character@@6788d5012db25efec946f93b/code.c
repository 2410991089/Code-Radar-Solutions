#include <stdio.h>

int main() {
  char inputChar;

  printf("Input format: A single character\n");

  scanf(" %c", &inputChar);

  printf("Output format: print entered character\n");
  printf("%c\n", inputChar);

  return 0;
}