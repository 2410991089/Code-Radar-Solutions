#include <stdio.h>

int main() {
  char character;

  printf("Input format: A single character\n");

  scanf(" %c", &character);

  printf("Output format: print entered character\n");
  printf("You entered: %c\n", character);

  return 0;
}