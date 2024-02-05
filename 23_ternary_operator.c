#include <stdio.h>

int findMax(int x, int y) { return (x > y) ? x : y; }

int main() {
  // ternary operator : short form of if-else conditions
  int result = findMax(3, 4);
  printf("%d", result);

  return 0;
}
