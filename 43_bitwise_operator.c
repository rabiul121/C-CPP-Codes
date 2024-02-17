//
// Created by robi on 2/17/2024.
//
#include <stdio.h>
int main() {

    // Bitwise Operator
    int x = 6; // 4  =  00000110
    int y = 10;// 10 =  00001010
    int z = 0;

    z = x & y;
    printf("AND: %d\n", z);

    z = x | y;
    printf("OR: %d\n", z);

    z = x ^ y;
    printf("XOR: %d\n", z);

    z = x << 1;// left shift by one bit
    printf("Left Shift: %d\n", z);

    z = x >> 2;// right shift by 2 bit
    printf("Right Shift: %d\n", z);

    return 0;
}