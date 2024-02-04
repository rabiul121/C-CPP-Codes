#include <stdio.h>
#include <math.h>

int main() {
    double a;
    double b;
    double c;

    printf("Enter side a: \n");
    scanf("%lf", &a);

    printf("Enter side b: \n");
    scanf("%lf", &b);

    c = sqrt(pow(a,2) + pow(b, 2));

    printf("The hypotenuse (side c) of the triangle is %.2lf\n", c);
    return 0;
}