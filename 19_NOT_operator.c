#include <stdbool.h>
#include <stdio.h>

int main() {
  bool sunny = true;

  if (!sunny) {
    printf("\nIt's Cloudy outside!");
  } else {
    printf("\nIt's Sunny outside!");
  }
  return 0;
}
