#include <stdio.h>

int clearNthBit(int number, int n) {
  int mask = 1 << n;
  mask = ~mask;
  return number & mask;
}

int main() {
  int number, n;

  printf("Enter the number: ");
  scanf("%d", &number);

  printf("Enter the bit position to clear (0-based): ");
  scanf("%d", &n);

  int result = clearNthBit(number, n);
  printf("Updated number: %d\n", result);

  return 0;
}