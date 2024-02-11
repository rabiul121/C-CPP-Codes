#include <stdio.h>

int main() {
    // array: collection of similar data types

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("%.2lf\n", prices[0]);// 5.00
    printf("%.2lf\n", prices[1]);// 10.00
    printf("%.2lf\n", prices[3]);// 25.00

    printf("%.2lf", prices[4]);// 20.00
    printf("%.2lf", prices[2]);// 15.00


    return 0;
}