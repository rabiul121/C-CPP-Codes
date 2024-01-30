#include <stdio.h>
int main()
{
    // arithmetic operators
    //   +      (addition)
    //   -      (subtraction)
    //   *      (multiplication)
    //   /      (division)
    //   %      (modulus)
    //   ++     (increment)
    //   --     (decrement)

    int x = 5;
    int y = 2;

    int sum = x + y;
    printf("sum: %d\n", sum);

    int sub = x - y;
    printf("sub: %d\n", sub);

    int mul = x * y;
    printf("mul: %d\n", mul);

    float div = x / (float)y; // type casting
    printf("div: %.2f\n", div);

    int mod = x % y; // remainder
    printf("mod: %d\n", mod);

    int inc = x++;
    printf("inc X: %d\n", inc);

    int dec = x--;
    printf("dec X: %d\n", dec);

    return 0;
}
