#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of the circle: \n");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    printf("The circumference of the circle is %lf\n", circumference);

    area = PI * pow(radius, 2);
    printf("The area of the circle is %lf\n", area);


    return 0;
}
