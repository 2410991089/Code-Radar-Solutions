#include <stdio.h>

int main() {
  char character;

  printf("A single character\n");

  scanf(" %c", &character);

  printf("print entered character\n");
  printf("You entered: %c\n", character);

  return 0;
}