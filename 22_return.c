#include <stdio.h>

double square(double x) { return x * x; }

int main() {
  double x = square(3.1416);
  printf("\nResult: %.2lf\n\n", x);
  return 0;
}
