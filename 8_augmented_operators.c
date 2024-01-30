#include <stdio.h>

int main()
{
    /*
    augmented operators
      +=     (addition)
      -=     (subtraction)
      *=     (multiplication)
      /=     (division)
      %=     (modulus)
      ++     (increment)
      --     (decrement)
    */

    int x = 10;
    int y = 100;
    int z = 999;
    float a = 64;
    int d = 10000000;

    x = x + 1;
    printf("Value of x in first increment: %d\n", x);

    x += 1; // same thing as previous line of code.
    printf("Value of x in second increment: %d\n", x);

    y -= 5;
    printf("Y = %d\n", y);

    z *= 9;
    printf("Z = %d\n", z);

    a /= 8;
    printf("A = %.2f\n", a);

    d %= 6;
    printf("D = %d", d);

    return 0;
}
